/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:08:03 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/01 14:04:28 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			// printf("list = %i | temp = %i\n", list->nb, temp->nb);
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
				ft_lstadd_back(stack_a, &stack_a->stack, ft_lstnew(stack_a, nb));
				nb = 0;
				sign = 1;
			}
		}
		ft_lstadd_back(stack_a, &stack_a->stack, ft_lstnew(stack_a, nb));
	}
	if (!list_is_valid(stack_a))
	{
		ft_putstr("Error: Two numbers are same\n");
		return (0);
	}
	return (1);
}