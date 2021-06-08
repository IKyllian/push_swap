/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:42:41 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/08 15:51:02 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void 	ft_push(t_list **list_b, t_stack *stack_b)
{
	t_list	*temp;
	t_list	*last;

	temp = (*list_b);
	*list_b = (*list_b)->next;
	free(temp);
	stack_b->size--;
	last = ft_lstlast(stack_b);
	(*list_b)->prev = last;
	last->next = *list_b;
}

void	ft_pa(t_stack *stack_a, t_stack *stack_b, int must_print)
{
	t_list	**list_a;
	t_list	**list_b;

	list_a = &stack_a->stack;
	list_b = &stack_b->stack;
	if (stack_b->size > 0)
	{
		ft_lstadd_front(stack_a, list_a, ft_lstnew((*list_b)->nb,
				(*list_b)->pos));
		if (stack_b->size > 1)
			ft_push(list_b, stack_b);
		else
		{
			free((*list_b));
			*list_b = NULL;
			stack_b->size--;
		}	
	}
	if (must_print)
		ft_putstr("pa\n");
}

void	ft_pb(t_stack *stack_a, t_stack *stack_b, int must_print)
{
	t_list	**list_a;
	t_list	**list_b;

	list_a = &stack_a->stack;
	list_b = &stack_b->stack;
	if (stack_a->size > 0)
	{
		ft_lstadd_front(stack_b, list_b, ft_lstnew((*list_a)->nb,
				(*list_a)->pos));
		if (stack_a->size > 1)
			ft_push(list_a, stack_a);
		else
		{
			free((*list_a));
			*list_a = NULL;
			stack_a->size--;
		}
		if (must_print)
			ft_putstr("pb\n");
	}
}
