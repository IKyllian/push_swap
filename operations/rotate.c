/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:42:45 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/22 16:05:41 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_stack *stack, int must_print, char *str, t_stack *stack_b)
{
	t_list	**list;
	t_list	*temp;

	list = &stack->stack;
	if (stack->size > 1)
	{
		ft_lstadd_back(stack, list, ft_lstnew((*list)->nb, (*list)->pos,
				stack, stack_b));
		temp = (*list);
		*list = (*list)->next;
		free(temp);
		stack->size--;
	}
	if (must_print)
		ft_putstr(str);
}

void	ft_rr(t_stack *stack_a, t_stack *stack_b, int must_print)
{
	ft_rotate(stack_a, 0, NULL, stack_b);
	ft_rotate(stack_b, 0, NULL, stack_a);
	if (must_print)
		ft_putstr("rr\n");
}

void	ft_reverse_rotate(t_stack *stack, int print, char *str, t_stack *stck_b)
{
	t_list	**list;
	t_list	*last;

	list = &stack->stack;
	if (stack->size > 1)
	{
		last = ft_lstlast(stack);
		ft_lstadd_front(stack, list, ft_lstnew(last->nb, last->pos,
				stack, stck_b));
		free(last);
		stack->size--;
	}
	if (print)
		ft_putstr(str);
}

void	ft_rrr(t_stack *stack_a, t_stack *stack_b, int must_print)
{
	ft_reverse_rotate(stack_a, 0, NULL, stack_b);
	ft_reverse_rotate(stack_b, 0, NULL, stack_a);
	if (must_print)
		ft_putstr("rrr\n");
}
