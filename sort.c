#include "push_swap.h"

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
