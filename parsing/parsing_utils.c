/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:42:37 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/24 12:50:28 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(char *str, int *nb)
{
	int		i;
	long	nbr;
	int		sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			nbr = nbr * 10 + (str[i++] - 48);
		else if (str[i] == ' ' || str[i++] == '\t')
			break ;
		else
			return (0);
	}
	*nb = nbr * sign;
	return (1);
}

int	is_in_quote(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == ' ' || str[i] == '\t')
			return (1);
	return (0);
}
