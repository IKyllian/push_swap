/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:42:23 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/01 16:33:06 by kdelport         ###   ########.fr       */
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
		ft_swap(stack_a);
	else if (first->nb > middle->nb && middle->nb > last->nb)
	{
		ft_swap(stack_a);
		ft_reverse_rotate(stack_a);
	}
	else if (first->nb > middle->nb && middle->nb < last->nb && first->nb > last->nb)
		ft_rotate(stack_a);
	else if (first->nb < middle->nb && first->nb < last->nb)
	{
		ft_swap(stack_a);
		ft_rotate(stack_a);
	}
	else if (first->nb < middle->nb && first->nb > last->nb)
		ft_reverse_rotate(stack_a);
}

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	ft_pb(stack_a, stack_b);
	ft_pb(stack_a, stack_b);
	sort_three(stack_a);
	if (stack_b->stack->nb < stack_b->stack->next->nb)
		ft_swap(stack_b);
	// Check comment bien remettre les nombres de la stack b dans la stack a
	
}

void	set_pos(t_stack *stack_a)
{
	int		i;
	int		j;
	t_list	*first;
	t_list	**temp;
	t_list	**curr;
	t_list	*list;
	t_list	**min;
	t_list	**max;

	i = 0;
	first = stack_a->stack;
	list = stack_a->stack;
	min = &stack_a->stack;
	max = &stack_a->stack;
	while (++i < stack_a->size)
	{
		if ((*min)->nb > list->nb)
			*min = list;
		if ((*max)->nb < list->nb)
			*max = list;
		list = list->next;
	}
	(*min)->pos = 0;
	(*max)->pos = stack_a->size - 1;
	i = 0;
	list = first;
	while (++i < stack_a->size)
	{
		j = 0;
		temp = &stack_a->stack;
		curr = &stack_a->stack;
		while (++j < stack_a->size)
		{
			if ((*temp)->nb < (*curr)->nb && (*curr)->nb > (*min)->nb)
				*curr = *temp;
			*temp = (*temp)->next;
		}
		(*curr)->pos = i;
		list = list->next;
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
	print_stacks(&stack_a, &stack_b);
	if (stack_a.size == 3)
		sort_three(&stack_a);
	else if (stack_a.size == 5)
		sort_five(&stack_a, &stack_b);
	// print_stacks(&stack_a, &stack_b);
	return (0);
}

// int main(int argc, char **argv)
// {
// 	t_stack stack_a;
// 	t_stack stack_b;
// 	char	*line;
	
// 	if (argc < 2)
// 		ft_putstr("Error\n");
// 	stack_a = init_list();
// 	stack_b = init_list();
// 	if (!parsing(argv, &stack_a))
// 		return (1);
// 	print_stacks(&stack_a, &stack_b);
// 	while (get_next_line(0, &line))
// 	{
// 		if (!check_cmd(line, &stack_a, &stack_b))
// 			ft_putstr("Error: L'instruction n\'existe pas\n");
// 		else
// 			print_stacks(&stack_a, &stack_b);
// 	}
// 	if (!check_order(&stack_a, &stack_b))
// 		ft_putstr("KO\n");
// 	else
// 		ft_putstr("OK\n");
// 	return (0);
// }