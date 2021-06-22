/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:53:20 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/22 15:53:21 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*get_biggest(t_stack *stack, int *index_pos)
{
	int		i;
	t_list	*list;
	t_list	*temp;

	i = 0;
	list = stack->stack;
	temp = list;
	while (++i <= stack->size)
	{
		if (list->nb > temp->nb)
		{
			*index_pos = i - 1;
			temp = list;
		}
		list = list->next;
	}
	return (temp);
}

int	get_smallest(t_stack *stack, int limit, int chunk, int reverse)
{
	t_list	*list;
	int		i;

	list = stack->stack;
	i = 0;
	while (++i <= stack->size)
	{
		if (list->pos >= limit - chunk && list->pos < limit)
			return (i);
		if (!reverse)
			list = list->next;
		else
			list = list->prev;
	}
	return (i);
}
