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

void	ft_rotate(t_stack *stack)
{
	t_list	**list;
	t_list	*temp;

	list = &stack->stack;
	if (stack->size > 1)
	{
		ft_lstadd_back(stack, list, ft_lstnew(stack, (*list)->nb));
		temp = (*list);
		*list = (*list)->next;
		free(temp);
		stack->size--;
	}
}

void	ft_rr(t_stack *stack_a, t_stack *stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
}

void	ft_reverse_rotate(t_stack *stack)
{
	t_list	**list;
	t_list	*last;

	list = &stack->stack;
	if (stack->size > 1)
	{
		last = ft_lstlast(stack);	
		ft_lstadd_front(stack, list, ft_lstnew(stack, last->nb));
		free(last);
		stack->size--;
	}
}

void	ft_rrr(t_stack *stack_a, t_stack *stack_b)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
}