/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:08:03 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/24 12:58:37 by kdelport         ###   ########.fr       */
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

int	parse_nbr(char *str, t_stack *stack)
{
	int		nb;
	char	*char_nb;

	nb = 0;
	if (!ft_atoi(str, &nb))
		return (0);
	char_nb = ft_itoa(nb);
	if (ft_strcmp(str, char_nb) != 0)
	{
		if (char_nb)
			free(char_nb);
		return (0);
	}
	ft_lstadd_back(stack, &stack->stack,
		ft_lstnew(nb, 0, stack, NULL));
	if (char_nb)
		free(char_nb);
	return (1);
}

int	parse_quote(char *str, t_stack *stack)
{
	char	**tab;
	int		i;

	tab = ft_split(str, ' ');
	i = -1;
	while (tab[++i])
	{
		if (!parse_nbr(tab[i], stack))
		{
			ft_putstr("Error: Invalid character\n");
			free_tab(tab);
			return (0);
		}	
	}
	free_tab(tab);
	return (1);
}

int	check_list(t_stack *stack)
{
	if (!list_is_valid(stack))
	{
		ft_putstr("Error: Two numbers are same\n");
		return (0);
	}
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
		if (is_in_quote(argv[i]))
		{
			if (!parse_quote(argv[i], stack))
				return (0);
		}
		else
		{
			if (!parse_nbr(argv[i], stack))
			{
				ft_putstr("Error: Invalid character\n");
				return (0);
			}	
		}
	}
	if (!check_list(stack))
		return (0);
	return (1);
}
