/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:43:07 by kdelport          #+#    #+#             */
/*   Updated: 2021/05/28 09:43:07 by kdelport         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack *stack)
{
	int temp;

	if (stack->size == 0 || stack->size == 1)
		return ;
	temp = stack->stack->nb;
	stack->stack->nb = stack->stack->next->nb;
	stack->stack->next->nb = temp;
}

void	ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}