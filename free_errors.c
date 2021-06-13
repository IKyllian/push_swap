#include "push_swap.h"

void	free_linked_list(t_list *list, int size)
{
	t_list	*next;
	int		i;

	i = 0;
	next = NULL;
	while (++i <= size)
	{
		if (list->next)
			next = list->next;
		else
			next = NULL;
		free(list);
		list = NULL;
		list = next;
	}
}

void	free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->stack)
		free_linked_list(stack_a->stack, stack_a->size);
	if (stack_b->stack)
		free_linked_list(stack_b->stack, stack_b->size);
}

void	ft_error(t_stack *stack_a, t_stack *stack_b)
{
	free_stacks(stack_a, stack_b);
	exit(1);
}