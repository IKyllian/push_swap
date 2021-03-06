/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:54:00 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/24 12:02:30 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_linked_list(t_list *list, int size)
{
	t_list	*next;
	int		i;

	i = 0;
	next = NULL;
	while (++i <= size)
	{
		if (list->next)
			next = list->next;
		else
			next = NULL;
		free(list);
		list = NULL;
		list = next;
	}
}

void	free_tab(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}

void	free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->stack)
		free_linked_list(stack_a->stack, stack_a->size);
	if (stack_b->stack)
		free_linked_list(stack_b->stack, stack_b->size);
}

void	ft_error(t_stack *stack_a, t_stack *stack_b)
{
	free_stacks(stack_a, stack_b);
	exit(1);
}
