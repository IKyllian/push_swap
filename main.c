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

t_list	*get_biggest(t_stack *stack, int *index_pos)
{
	int		i;
	t_list	*list;
	t_list	*temp;

	i = 0;
	list = stack->stack;
	temp = list;
	while (++i <= stack->size)
	{
		if (list->nb > temp->nb)
		{
			*index_pos = i - 1;
			temp = list; 
		}
		list = list->next;
	}
	return (temp);
}

t_list	*get_smallest(t_stack *stack, int *index_pos)
{
	int		i;
	t_list	*list;
	t_list	*temp;

	i = 0;
	list = stack->stack;
	temp = list;
	while (++i <= stack->size)
	{
		if (list->nb < temp->nb)
		{
			*index_pos = i - 1;
			temp = list; 
		}
		list = list->next;
	}
	return (temp);
}

void	sort_hundred(t_stack *stack_a, t_stack *stack_b)
{
	int		i;
	int		j;
	t_list	*list;
	t_list	*one;
	t_list	*two;
	t_list	*biggest;
	int		index_pos;
	int		half;
	int 	chunk;
	int		limit;
	int 	size;

	list = stack_a->stack;
	chunk = stack_a->size / 5;
	limit = chunk;
	size = stack_a->size;
	while (stack_a->size > 0)
	{
		i = 0;
		list = stack_a->stack;
		while (++i <= stack_a->size)
		{
			if (list->pos >= limit - chunk && list->pos < limit)
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
			if (list->pos >= limit - chunk && list->pos < limit)
			{
				two = list;
				break ;
			}
			list = list->prev;
		}	
		if (i > j)
		{
			while (--j > 0)
				ft_reverse_rotate(stack_a, 1, 'a');
		}
		else
		{
			while (--i > 0)
				ft_rotate(stack_a, 1, 'a');
		}
		if (stack_a->size == (size - chunk) + 1)
			limit += chunk;
		else if (stack_a->size == (size - (chunk * 2)) + 1)
			limit += chunk;
		else if (stack_a->size == (size - (chunk * 3)) + 1)
			limit += chunk;
		else if (stack_a->size == (size - (chunk * 4)) + 1)
			limit += chunk;
		ft_pb(stack_a, stack_b, 1);
	}
	list = stack_b->stack;
	while (stack_b->size > 0)
	{
		i = 0;
		list = stack_b->stack;
		
		index_pos = 0;
		if (stack_b->size % 2 != 0)
			half = (stack_b->size + 1) / 2;
		else
			half = stack_b->size / 2;
		biggest = get_biggest(stack_b, &index_pos);
		if (index_pos < half)
		{
			while (stack_b->stack->nb != biggest->nb)
				ft_rotate(stack_b, 1, 'b');
		}
		else
		{
			while (stack_b->stack->nb != biggest->nb)
				ft_reverse_rotate(stack_b, 1, 'b');
		}
		ft_pa(stack_a, stack_b, 1);
	}
}

void	sort_five_hundred(t_stack *stack_a, t_stack *stack_b)
{
	int		i;
	int		j;
	t_list	*list;
	t_list	*one;
	t_list	*two;
	t_list	*biggest;
	int		index_pos;
	int		half;
	int 	chunk;
	int		limit;
	int		size;

	list = stack_a->stack;
	chunk = stack_a->size / 11;
	limit = chunk;
	size = stack_a->size;
	while (stack_a->size > 0)
	{
		i = 0;
		list = stack_a->stack;
		while (++i <= stack_a->size)
		{
			if (list->pos >= limit - chunk && list->pos < limit)
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
			if (list->pos >= limit - chunk && list->pos < limit)
			{
				two = list;
				break ;
			}
			list = list->prev;
		}	
		if (i > j)
		{
			while (--j > 0)
				ft_reverse_rotate(stack_a, 1, 'a');
		}
		else
		{
			while (--i > 0)
				ft_rotate(stack_a, 1, 'a');
		}
		if (stack_a->size == (size - chunk) + 1)
			limit += chunk;
		else if (stack_a->size == (size - (chunk * 2)) + 1)
			limit += chunk;
		else if (stack_a->size == (size - (chunk * 3)) + 1)
			limit += chunk;
		else if (stack_a->size == (size - (chunk * 4)) + 1)
			limit += chunk;
		else if (stack_a->size == (size - (chunk * 5)) + 1)
			limit += chunk;
		else if (stack_a->size == (size - (chunk * 6)) + 1)
			limit += chunk;
		else if (stack_a->size == (size - (chunk * 7)) + 1)
			limit += chunk;
		else if (stack_a->size == (size - (chunk * 8)) + 1)
			limit += chunk;
		else if (stack_a->size == (size - (chunk * 9)) + 1)
			limit += chunk;
		else if (stack_a->size == (size - (chunk * 10)) + 1)
			limit += chunk;
		
		ft_pb(stack_a, stack_b, 1);
	}
	list = stack_b->stack;
	while (stack_b->size > 0)
	{
		i = 0;
		list = stack_b->stack;
		
		index_pos = 0;
		if (stack_b->size % 2 != 0)
			half = (stack_b->size + 1) / 2;
		else
			half = stack_b->size / 2;
		biggest = get_biggest(stack_b, &index_pos);
		if (index_pos < half)
		{
			while (stack_b->stack->nb != biggest->nb)
				ft_rotate(stack_b, 1, 'b');
		}
		else
		{
			while (stack_b->stack->nb != biggest->nb)
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
		else if (stack_a.size >= 6 && stack_a.size < 500)
			sort_hundred(&stack_a, &stack_b);
		else if (stack_a.size >= 500)
			sort_five_hundred(&stack_a, &stack_b);
	}
	// print_stacks(&stack_a, &stack_b);
	return (0);
}
