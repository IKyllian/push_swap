/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:42:45 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/02 12:46:42 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_stack *stack, int must_print, char which_stack)
{
	t_list	**list;
	t_list	*temp;

	list = &stack->stack;
	if (stack->size > 1)
	{
		ft_lstadd_back(stack, list, ft_lstnew(stack, (*list)->nb, (*list)->pos));
		temp = (*list);
		*list = (*list)->next;
		free(temp);
		stack->size--;
	}
	if (must_print)
	{
		if (which_stack == 'a')
			ft_putstr("ra\n");
		else
			ft_putstr("rb\n");	
	}
}

void	ft_rr(t_stack *stack_a, t_stack *stack_b, int must_print)
{
	ft_rotate(stack_a, 0, 0);
	ft_rotate(stack_b, 0, 0);
	if (must_print)
		ft_putstr("rr\n");
}

void	ft_reverse_rotate(t_stack *stack, int must_print, char which_stack)
{
	t_list	**list;
	t_list	*last;

	list = &stack->stack;
	if (stack->size > 1)
	{
		last = ft_lstlast(stack);	
		ft_lstadd_front(stack, list, ft_lstnew(stack, last->nb, last->pos));
		free(last);
		stack->size--;
	}
	if (must_print)
	{
		if (which_stack == 'a')
			ft_putstr("rra\n");
		else
			ft_putstr("rrb\n");	
	}
}

void	ft_rrr(t_stack *stack_a, t_stack *stack_b, int must_print)
{
	ft_reverse_rotate(stack_a, 0, 0);
	ft_reverse_rotate(stack_b, 0, 0);
	if (must_print)
		ft_putstr("rrr\n");
}