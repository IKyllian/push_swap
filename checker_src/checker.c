/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:14:43 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/24 12:33:22 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	init_list(void)
{
	t_stack	stack;

	stack.size = 0;
	stack.stack = NULL;
	return (stack);
}

void	exec_checker(t_stack *stack_a, t_stack *stack_b)
{
	char	*line;

	set_pos(stack_a);
	while (get_next_line(0, &line))
	{
		if (!check_cmd(line, stack_a, stack_b))
			ft_putstr("Error: L'instruction n\'existe pas\n");
		free(line);
		line = NULL;
	}
	if (line)
	{
		free(line);
		line = NULL;
	}
	if (!check_order(stack_a, stack_b))
		ft_putstr("\033[1;31mKO\n\033[0;37m");
	else
		ft_putstr("\033[1;32mOK\n\033[0;37m");
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
			exec_checker(&stack_a, &stack_b);
			free_stacks(&stack_a, &stack_b);
			return (0);
		}
		free_stacks(&stack_a, &stack_b);
	}
	else
		ft_putstr("Error\n");
	return (1);
}
