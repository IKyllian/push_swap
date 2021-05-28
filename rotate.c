/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:42:45 by kdelport          #+#    #+#             */
/*   Updated: 2021/05/28 13:43:33 by kdelport         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack *list)
{
	t_list	**stack;
	t_list *temp;

	stack = &list->stack;
	if (list->size > 1)
	{
		ft_lstadd_back(list, stack, ft_lstnew(list, (*stack)->nb));
		temp = (*stack);
		*stack = (*stack)->next;
		free(temp);
		list->size--;
	}
}

void	ft_rr(t_stack *list_a, t_stack *list_b)
{
	ft_rotate(list_a);
	ft_rotate(list_b);
}

void	ft_reverse_rotate(t_stack *list)
{
	t_list	**stack;
	t_list *last;

	stack = &list->stack;
	if (list->size > 1)
	{
		last = ft_lstlast(list);	
		ft_lstadd_front(list, stack, ft_lstnew(list, last->nb));
		free(last);
		list->size--;
	}
}

void	ft_rrr(t_stack *list_a, t_stack *list_b)
{
	ft_reverse_rotate(list_a);
	ft_reverse_rotate(list_b);
}