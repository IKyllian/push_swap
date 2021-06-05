#include "push_swap.h"

void	fill_stack_a(t_stack *stack_a, t_stack *stack_b)
{
	int half;
	int index_pos;
	t_list	*biggest;

	while (stack_b->size > 0)
	{
		index_pos = 0;
		if (stack_b->size % 2 != 0)
			half = (stack_b->size + 1) / 2;
		else
			half = stack_b->size / 2;
		biggest = get_biggest(stack_b, &index_pos);
		if (index_pos < half)
		{
			while (stack_b->stack->nb != biggest->nb)
				ft_rotate(stack_b, 1, 'b');
		}
		else
		{
			while (stack_b->stack->nb != biggest->nb)
				ft_reverse_rotate(stack_b, 1, 'b');
		}
		ft_pa(stack_a, stack_b, 1);
	}
}

void	sort_three(t_stack *stack_a)
{
	t_list	*first;
	t_list	*middle;
	t_list	*last;

	first = stack_a->stack;
	middle = stack_a->stack->next;
	last = stack_a->stack->prev;
	if (first->nb < middle->nb && first->nb < last->nb && middle->nb < last->nb)
		return ;
	else if (first->nb > middle->nb && middle->nb < last->nb && first->nb < last->nb)
		ft_swap(stack_a, 1, 'a');
	else if (first->nb > middle->nb && middle->nb > last->nb)
	{
		ft_swap(stack_a, 1, 'a');
		ft_reverse_rotate(stack_a, 1, 'a');
	}
	else if (first->nb > middle->nb && middle->nb < last->nb && first->nb > last->nb)
		ft_rotate(stack_a, 1, 'a');
	else if (first->nb < middle->nb && first->nb < last->nb)
	{
		ft_swap(stack_a, 1, 'a');
		ft_rotate(stack_a, 1, 'a');
	}
	else if (first->nb < middle->nb && first->nb > last->nb)
		ft_reverse_rotate(stack_a, 1, 'a');
}

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->size != 3)
	{
		if (stack_a->stack->pos == 0 || stack_a->stack->pos == 1)
			ft_pb(stack_a, stack_b, 1);
		else if (stack_a->stack->prev->pos == 0 || stack_a->stack->prev->pos == 1 
				|| stack_a->stack->prev->prev->pos == 0 || stack_a->stack->prev->prev->pos == 1)
			ft_reverse_rotate(stack_a, 1, 'a');
		else
			ft_rotate(stack_a, 1, 'a');
	}
	sort_three(stack_a);
	if (stack_b->stack->nb < stack_b->stack->next->nb)
		ft_swap(stack_b, 1, 'b');
	while (stack_b->size > 0)
		ft_pa(stack_a, stack_b, 1);
}

void	sort_hundred(t_stack *stack_a, t_stack *stack_b, int size_a)
{
	int		i;
	int		j;
	int 	chunk;
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
				ft_reverse_rotate(stack_a, 1, 'a');
		}
		else
		{
			while (--i > 0)
				ft_rotate(stack_a, 1, 'a');
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
	int 	chunk;
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
				ft_reverse_rotate(stack_a, 1, 'a');
		}
		else
		{
			while (--i > 0)
				ft_rotate(stack_a, 1, 'a');
		}
		set_chunk_limit500(stack_a, size_a, &limit, chunk);
		ft_pb(stack_a, stack_b, 1);
	}
	fill_stack_a(stack_a, stack_b);
}
