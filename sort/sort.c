/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:40:41 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/08 15:28:05 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack *stack_a, t_stack *stack_b)
{
	t_list	*middle;
	t_list	*last;

	middle = stack_a->stack->next;
	last = stack_a->stack->prev;
	if (stack_a->stack->nb > middle->nb && middle->nb < last->nb
		&& stack_a->stack->nb < last->nb)
		ft_swap(stack_a, 1, "sa\n");
	else if (stack_a->stack->nb > middle->nb && middle->nb > last->nb)
	{
		ft_swap(stack_a, 1, "sa\n");
		ft_reverse_rotate(stack_a, 1, "rra\n", stack_b);
	}
	else if (stack_a->stack->nb > middle->nb && middle->nb < last->nb
		&& stack_a->stack->nb > last->nb)
		ft_rotate(stack_a, 1, "ra\n", stack_b);
	else if (stack_a->stack->nb < middle->nb && stack_a->stack->nb < last->nb)
	{
		ft_swap(stack_a, 1, "sa\n");
		ft_rotate(stack_a, 1, "ra\n", stack_b);
	}
	else if (stack_a->stack->nb < middle->nb && stack_a->stack->nb > last->nb)
		ft_reverse_rotate(stack_a, 1, "rra\n", stack_b);
}

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->size != 3)
	{
		if (stack_a->stack->pos == 0 || stack_a->stack->pos == 1)
			ft_pb(stack_a, stack_b, 1);
		else if (stack_a->stack->prev->pos == 0
			|| stack_a->stack->prev->pos == 1
			|| stack_a->stack->prev->prev->pos == 0
			|| stack_a->stack->prev->prev->pos == 1)
			ft_reverse_rotate(stack_a, 1, "rra\n", stack_b);
		else
			ft_rotate(stack_a, 1, "ra\n", stack_b);
	}
	sort_three(stack_a, stack_b);
	if (stack_b->stack->nb < stack_b->stack->next->nb)
		ft_swap(stack_b, 1, "sb\n");
	while (stack_b->size > 0)
		ft_pa(stack_a, stack_b, 1);
}

void	sort_four(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->size != 3)
	{
		if (stack_a->stack->pos == 0)
			ft_pb(stack_a, stack_b, 1);
		else if (stack_a->stack->prev->pos == 0
			|| stack_a->stack->prev->prev->pos == 0)
			ft_reverse_rotate(stack_a, 1, "rra\n", stack_b);
		else
			ft_rotate(stack_a, 1, "ra\n", stack_b);
	}
	sort_three(stack_a, stack_b);
	ft_pa(stack_a, stack_b, 1);
}

void	sort_hundred(t_stack *stack_a, t_stack *stack_b, int size_a)
{
	int		i;
	int		j;
	int		chunk;
	int		limit;

	chunk = stack_a->size / 5;
	limit = chunk;
	while (stack_a->size > 0)
	{
		i = get_smallest(stack_a, limit, chunk, 0);
		j = get_smallest(stack_a, limit, chunk, 1);
		if (i > j)
		{
			while (--j > 0)
				ft_reverse_rotate(stack_a, 1, "rra\n", stack_b);
		}
		else
		{
			while (--i > 0)
				ft_rotate(stack_a, 1, "ra\n", stack_b);
		}
		set_chunk_limit100(stack_a, size_a, &limit, chunk);
		ft_pb(stack_a, stack_b, 1);
	}
	fill_stack_a(stack_a, stack_b);
}

void	sort_five_hundred(t_stack *stack_a, t_stack *stack_b, int size_a)
{
	int		i;
	int		j;
	int		chunk;
	int		limit;

	chunk = stack_a->size / 11;
	limit = chunk;
	while (stack_a->size > 0)
	{
		i = get_smallest(stack_a, limit, chunk, 0);
		j = get_smallest(stack_a, limit, chunk, 1);
		if (i > j)
		{
			while (--j > 0)
				ft_reverse_rotate(stack_a, 1, "rra\n", stack_b);
		}
		else
		{
			while (--i > 0)
				ft_rotate(stack_a, 1, "ra\n", stack_b);
		}
		set_chunk_limit500(stack_a, size_a, &limit, chunk);
		ft_pb(stack_a, stack_b, 1);
	}
	fill_stack_a(stack_a, stack_b);
}
