/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:00:45 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/08 15:07:41 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fill_pos(t_list *min, t_list *max, t_list *first, t_stack *stack_a)
{
	int		j;
	int		i;
	t_list	*list;
	t_list	*temp;
	t_list	*old_min;

	list = first;
	old_min = min;
	temp = max;
	i = 0;
	while (++i < stack_a->size - 1)
	{
		j = 0;
		while (j++ < stack_a->size)
		{
			if (list->nb > min->nb && list->nb < max->nb
				&& list->nb > old_min->nb && temp->nb > list->nb)
				temp = list;
			list = list->next;
		}
		temp->pos = i;
		old_min = temp;
		temp = max;
		list = first;
	}
}

void	set_pos(t_stack *stack_a)
{
	int		i;
	t_list	*first;
	t_list	*list;
	t_list	*min;
	t_list	*max;

	i = 0;
	first = stack_a->stack;
	list = stack_a->stack;
	min = stack_a->stack;
	max = stack_a->stack;
	while (++i <= stack_a->size)
	{
		if (min->nb > list->nb)
			min = list;
		if (max->nb < list->nb)
			max = list;
		list = list->next;
	}
	min->pos = 0;
	max->pos = stack_a->size - 1;
	fill_pos(min, max, first, stack_a);
}
