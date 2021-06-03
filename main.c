/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:42:23 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/03 14:40:30 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	init_list(void)
{
	t_stack stack;

	stack.size = 0;
	stack.stack = NULL;
	return (stack);
}

void	sort_three(t_stack *stack_a)
{
	t_list	*first;
	t_list	*middle;
	t_list	*last;

	first = stack_a->stack;
	middle = stack_a->stack->next;
	last = ft_lstlast(stack_a);
	if (first->nb < middle->nb && first->nb < last->nb && middle->nb < last->nb)
		return ;
	else if (first->nb > middle->nb && middle->nb < last->nb && first->nb < last->nb)
		ft_swap(stack_a, 1, 'a');
	else if (first->nb > middle->nb && middle->nb > last->nb)
	{
		ft_swap(stack_a, 1, 'a');
		ft_reverse_rotate(stack_a, 1, 'a');
	}
	else if (first->nb > middle->nb && middle->nb < last->nb && first->nb > last->nb)
		ft_rotate(stack_a, 1, 'a');
	else if (first->nb < middle->nb && first->nb < last->nb)
	{
		ft_swap(stack_a, 1, 'a');
		ft_rotate(stack_a, 1, 'a');
	}
	else if (first->nb < middle->nb && first->nb > last->nb)
		ft_reverse_rotate(stack_a, 1, 'a');
}

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->size != 3)
	{
		if (stack_a->stack->pos == 0 || stack_a->stack->pos == 1)
			ft_pb(stack_a, stack_b, 1);
		else if (stack_a->stack->prev->pos == 0 || stack_a->stack->prev->pos == 1 
				|| stack_a->stack->prev->prev->pos == 0 || stack_a->stack->prev->prev->pos == 1)
			ft_reverse_rotate(stack_a, 1, 'a');
		else
			ft_rotate(stack_a, 1, 'a');
	}
	sort_three(stack_a);
	if (stack_b->stack->nb < stack_b->stack->next->nb)
		ft_swap(stack_b, 1, 'b');
	while (stack_b->size > 0)
		ft_pa(stack_a, stack_b, 1);
}

void	sort_hundred(t_stack *stack_a, t_stack *stack_b)
{
	int		i;
	int		j;
	t_list	*list;
	t_list	*one;
	t_list	*two;
	t_list	*temp;
	int		index_pos;
	int		half;

	list = stack_a->stack;
	while (stack_a->size > 0)
	{
		i = 0;
		list = stack_a->stack;
		while (++i <= stack_a->size)
		{
			if (list->pos >= 0 && list->pos <= 19)
			{
				one = list;
				break ;
			}
			list = list->next;
		}
		j = 0;
		list = stack_a->stack;
		while (++j <= stack_a->size)
		{
			if (list->pos >= 0 && list->pos <= 19)
			{
				two = list;
				break ;
			}
			list = list->prev;
		}	
		if (i > j)
		{
			while (j-- > 0)
				ft_reverse_rotate(stack_a, 1, 'a');
		}
		else
		{
			while (j-- > 0)
				ft_rotate(stack_a, 1, 'a');
		}
		ft_pb(stack_a, stack_b, 1);
	}
	list = stack_b->stack;
	while (stack_b->size > 0)
	{
		i = 0;
		list = stack_b->stack;
		temp = list;
		index_pos = 0;
		if (stack_b->size % 2 != 0)
			half = (stack_b->size + 1) / 2;
		else
			half = stack_b->size / 2;
		while (++i <= stack_b->size)
		{
			if (list->nb > temp->nb)
			{
				index_pos = i - 1;
				temp = list; 
			}
			list = list->next;
		}
		if (index_pos < half)
		{
			while (stack_b->stack->nb != temp->nb)
				ft_rotate(stack_b, 1, 'b');
		}
		else
		{
			while (stack_b->stack->nb != temp->nb)
				ft_reverse_rotate(stack_b, 1, 'b');
		}
		ft_pa(stack_a, stack_b, 1);
	}
}

int main(int argc, char **argv)
{
	t_stack stack_a;
	t_stack stack_b;
	
	if (argc < 2)
		ft_putstr("Error\n");
	stack_a = init_list();
	stack_b = init_list();
	if (!parsing(argv, &stack_a))
		return (1);
	set_pos(&stack_a);
	// print_stacks(&stack_a, &stack_b);
	if (!check_order(&stack_a, &stack_b))
	{
		if (stack_a.size == 2)
			ft_swap(&stack_a, 1, 'a');
		if (stack_a.size == 3)
			sort_three(&stack_a);
		else if (stack_a.size == 5)
			sort_five(&stack_a, &stack_b);
		else if (stack_a.size >= 6 && stack_a.size <= 100)
			sort_hundred(&stack_a, &stack_b);
	}
	print_stacks(&stack_a, &stack_b);
	return (0);
}
