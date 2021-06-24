#include "push_swap.h"

void	print_list(t_stack *stack)
{
	int		i;
	t_list	*list;

	list = stack->stack;
	i = 0;
	while (++i < stack->size)
		if (list->next)
			list = list->next;
}

void	print_stacks(t_stack *stack_a, t_stack *stack_b)
{
	int		i;
	t_list	*list_a;
	t_list	*list_b;

	list_a = stack_a->stack;
	list_b = stack_b->stack;
	i = 0;
	printf("Size : Stack a = %i | Stack b = %i\n", stack_a->size, stack_b->size);
	while (++i <= stack_a->size || i <= stack_b->size)
	{
		if (i <= stack_a->size)
		{
			ft_putnbr(list_a->nb);
			// ft_putstr(" pos => ");
			// ft_putnbr(list_a->pos);
			list_a = list_a->next;
		}
		ft_putstr("\t");
		if (i <= stack_b->size)
		{
			ft_putnbr(list_b->nb);
			// ft_putstr(" pos => ");
			// ft_putnbr(list_b->pos);
			list_b = list_b->next;
		}
		ft_putstr("\n");
	}
	ft_putstr("---------");
	ft_putstr("\n");
	ft_putstr("a");
	ft_putstr("\t");
	ft_putstr("b");
	ft_putstr("\n");
}