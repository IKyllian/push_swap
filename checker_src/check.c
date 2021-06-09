/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:11:38 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/08 15:31:41 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_cmd(char *line, t_stack *stack_a, t_stack *stack_b)
{
	if (ft_strcmp(line, "sa") == 0)
		ft_swap(stack_a, 0, NULL);
	else if (ft_strcmp(line, "sb") == 0)
		ft_swap(stack_b, 0, NULL);
	else if (ft_strcmp(line, "ss") == 0)
		ft_ss(stack_a, stack_b, 0);
	else if (ft_strcmp(line, "pa") == 0)
		ft_pa(stack_a, stack_b, 0);
	else if (ft_strcmp(line, "pb") == 0)
		ft_pb(stack_a, stack_b, 0);
	else if (ft_strcmp(line, "ra") == 0)
		ft_rotate(stack_a, 0, NULL);
	else if (ft_strcmp(line, "rb") == 0)
		ft_rotate(stack_b, 0, NULL);
	else if (ft_strcmp(line, "rr") == 0)
		ft_rr(stack_a, stack_b, 0);
	else if (ft_strcmp(line, "rra") == 0)
		ft_reverse_rotate(stack_a, 0, NULL);
	else if (ft_strcmp(line, "rrb") == 0)
		ft_reverse_rotate(stack_b, 0, NULL);
	else if (ft_strcmp(line, "rrr") == 0)
		ft_rrr(stack_a, stack_b, 0);
	else
		return (0);
	return (1);
}

int	check_order(t_stack *stack_a, t_stack *stack_b)
{
	t_list	*list;
	t_list	*cpy;
	int		i;
	int		j;

	if (stack_b->size != 0)
		return (0);
	list = stack_a->stack;
	cpy = stack_a->stack;
	i = 0;
	while (++i <= stack_a->size)
	{
		cpy = list->next;
		j = i;
		while (++j <= stack_a->size)
		{
			if (list->nb > cpy->nb)
				return (0);
			cpy = cpy->next;
		}
		list = list->next;
	}
	return (1);
}
