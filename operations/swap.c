/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:43:07 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/08 15:58:43 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_stack *stack, int must_print, char which_stack)
{
	int	temp_nb;
	int	temp_pos;

	if (stack->size == 0 || stack->size == 1)
		return ;
	temp_nb = stack->stack->nb;
	temp_pos = stack->stack->pos;
	stack->stack->nb = stack->stack->next->nb;
	stack->stack->pos = stack->stack->next->pos;
	stack->stack->next->nb = temp_nb;
	stack->stack->next->pos = temp_pos;
	if (must_print)
	{
		if (which_stack == 'a')
			ft_putstr("sa\n");
		else
			ft_putstr("sb\n");
	}
}

void	ft_ss(t_stack *stack_a, t_stack *stack_b, int must_print)
{
	ft_swap(stack_a, 0, 0);
	ft_swap(stack_b, 0, 0);
	if (must_print)
		ft_putstr("ss\n");
}
