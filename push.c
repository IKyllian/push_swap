/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:42:41 by kdelport          #+#    #+#             */
/*   Updated: 2021/05/28 13:43:00 by kdelport         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack *list_a, t_stack *list_b)
{
	t_list **stack_a;
	t_list **stack_b;
	t_list *temp;

	stack_a = &list_a->stack;
	stack_b = &list_b->stack;
	if (list_b > 0)
	{
		ft_lstadd_front(list_a, stack_a, ft_lstnew(list_a, (*stack_b)->nb));
		if (list_b->size > 1)
		{
			temp = (*stack_b);
			*stack_b = (*stack_b)->next;
			free(temp);
			list_b->size--;
		}
		else
			free((*stack_b));
	}
}

void	ft_pb(t_stack *list_a, t_stack *list_b)
{
	t_list **stack_a;
	t_list **stack_b;
	t_list *temp;
	
	stack_a = &list_a->stack;
	stack_b = &list_b->stack;
	if (list_a->size != 0)
	{
		ft_lstadd_front(list_b, stack_b, ft_lstnew(list_b, (*stack_a)->nb));
		if (list_a->size > 1)
		{
			temp = (*stack_a);
			*stack_a = (*stack_a)->next;
			free(temp);
			list_a->size--;
		}
		else
			free((*stack_a));
	}
}