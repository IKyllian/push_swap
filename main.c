/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:42:23 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/23 14:35:53 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	init_list(void)
{
	t_stack	stack;

	stack.size = 0;
	stack.stack = NULL;
	return (stack);
}

void	ft_exec(t_stack *stack_a, t_stack *stack_b)
{
	if (!check_order(stack_a, stack_b))
	{
		if (stack_a->size == 2)
			ft_swap(stack_a, 1, "sa\n");
		if (stack_a->size == 3)
			sort_three(stack_a, stack_b);
		else if (stack_a->size == 4)
			sort_four(stack_a, stack_b);
		else if (stack_a->size == 5)
			sort_five(stack_a, stack_b);
		else if (stack_a->size >= 6 && stack_a->size < 500)
			sort_hundred(stack_a, stack_b, stack_a->size);
		else if (stack_a->size >= 500)
			sort_five_hundred(stack_a, stack_b, stack_a->size);
	}
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc >= 2)
	{
		stack_a = init_list();
		stack_b = init_list();
		if (parsing(argv, &stack_a))
		{
			set_pos(&stack_a);
			ft_exec(&stack_a, &stack_b);
			free_stacks(&stack_a, &stack_b);
			return (0);
		}
		free_stacks(&stack_a, &stack_b);
	}
	else
		ft_putstr("Error: Arguments\n");
	return (1);
}
