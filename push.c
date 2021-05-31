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

void	ft_pa(t_stack *stack_a, t_stack *stack_b)
{
	t_list **list_a;
	t_list **list_b;
	t_list *temp;

	list_a = &stack_a->stack;
	list_b = &stack_b->stack;
	if (stack_b->size > 0)
	{
		ft_lstadd_front(stack_a, list_a, ft_lstnew(stack_a, (*list_b)->nb));
		if (stack_b->size > 1)
		{
			temp = (*list_b);
			*list_b = (*list_b)->next;
			free(temp);
			stack_b->size--;
		}
		else
		{
			*list_b = NULL;
			stack_b->size--;
			free((*list_b));
		}
	}
}

void	ft_pb(t_stack *stack_a, t_stack *stack_b)
{
	t_list **list_a;
	t_list **list_b;
	t_list *temp;
	
	list_a = &stack_a->stack;
	list_b = &stack_b->stack;
	if (stack_a->size > 0)
	{
		ft_lstadd_front(stack_b, list_b, ft_lstnew(stack_b, (*list_a)->nb));
		if (stack_a->size > 1)
		{
			temp = (*list_a);
			*list_a = (*list_a)->next;
			free(temp);
			stack_a->size--;
		}
		else
		{
			free((*list_a));
			*list_a = NULL;
			stack_a->size--;
		}
			
	}
}