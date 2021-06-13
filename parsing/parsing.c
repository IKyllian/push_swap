/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:08:03 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/08 16:06:04 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

int	ft_atoi(char c, char next_c, int *sign, int *nb)
{
	if (c == '-')
	{
		if ((!(next_c) || (next_c < 48 || next_c > 57)))
			return (0);
		if (*sign == -1)
			return (0);
		else
			*sign = -1;
	}
	else if (c < 48 || c > 57)
		return (0);
	else
		*nb = *nb * 10 + (c - 48); // Pensé à check si le nombre passe negatif pour overflow
	return (1);
}

void	add_quote_nb(t_stack *stack, int *is_valid, int *nb, int *sign)
{
	ft_lstadd_back(stack, &stack->stack, ft_lstnew(*nb * *sign, 0, stack, NULL));
	*nb = 0;
	*sign = 1;
	*is_valid = 0;
}

int	parse_nbr(char **argv, t_stack *stack, int i, int *is_valid)
{
	int	j;
	int	nb;
	int	sign;

	j = -1;
	nb = 0;
	sign = 1;
	while (argv[i][++j])
	{
		if (argv[i][j] != ' ' && argv[i][j] != '\t')
		{
			if (!ft_atoi(argv[i][j], argv[i][j + 1], &sign, &nb))
				return (0);
			*is_valid = 1;
		}
		else if (*is_valid)
			add_quote_nb(stack, is_valid, &nb, &sign);
	}
	if (*is_valid)
		ft_lstadd_back(stack, &stack->stack, ft_lstnew(nb * sign, 0, stack, NULL));
	return (1);
}

int	parsing(char **argv, t_stack *stack)
{
	int		i;
	int		is_valid;

	i = 0;
	is_valid = 0;
	while (argv[++i])
	{
		is_valid = 0;
		if (!parse_nbr(argv, stack, i, &is_valid))
		{
			ft_putstr("Error: Invalid character\n");
			return (0);
		}		
	}
	if (!list_is_valid(stack))
	{
		ft_putstr("Error: Two numbers are same\n");
		return (0);
	}
	return (1);
}
