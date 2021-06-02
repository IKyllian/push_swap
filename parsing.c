/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:08:03 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/02 15:24:24 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		while (++j < stack_a->size + 1)
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

int	list_is_valid(t_stack *stack)
{
	int		i;
	int		j;
	t_list	*list;
	t_list	*temp;
	
	list = stack->stack;
	i = 0;
	while (list && i < stack->size)
	{
		j = 0;
		temp = list->next;
		while (temp && ++j < stack->size)
		{
			if (list->nb == temp->nb)
				return (0);
			if (temp->next)
				temp = temp->next;
		}
		if (list->next)
			list = list->next;
		i++;
	}
	return (1);
}

int	parsing(char **argv, t_stack *stack_a)
{
	int		i;
	int		j;
	int		nb;
	int		sign;

	i = 0;
	while (argv[++i])
	{
		j = -1;
		nb = 0;
		sign = 1;
		while (argv[i][++j])
		{
			if (argv[i][j] != ' ' && argv[i][j] != '\t')
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					ft_putstr("Error: Invalid character\n");
					return (0);
				}
				else
					nb = nb * 10 + (argv[i][j] - 48); // Check si le nombre passe negatif pour overflow
			}
			else
			{
				ft_lstadd_back(stack_a, &stack_a->stack, ft_lstnew(stack_a, nb, 0));
				nb = 0;
				sign = 1;
			}
		}
		ft_lstadd_back(stack_a, &stack_a->stack, ft_lstnew(stack_a, nb, 0));
	}
	if (!list_is_valid(stack_a))
	{
		ft_putstr("Error: Two numbers are same\n");
		return (0);
	}
	return (1);
}