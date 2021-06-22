/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:14:43 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/14 12:27:20 by kdelport         ###   ########.fr       */
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

// int	main(int argc, char **argv)
// {
// 	t_stack	stack_a;
// 	t_stack	stack_b;
// 	char	*line;

// 	if (argc < 2)
// 	{
// 		ft_putstr("Error\n");
// 		return (1);
// 	}
// 	stack_a = init_list();
// 	stack_b = init_list();
// 	if (!parsing(argv, &stack_a))
// 	{
// 		free_stacks(&stack_a, &stack_b);
// 		return (1);
// 	}
// 	set_pos(&stack_a);
// 	while (get_next_line(0, &line))
// 	{
// 		if (!check_cmd(line, &stack_a, &stack_b))
// 			ft_putstr("Error: L'instruction n\'existe pas\n");
// 		free(line);
// 		line = NULL;
// 	}
// 	if (!check_order(&stack_a, &stack_b))
// 		ft_putstr("KO\n");
// 	else
// 		ft_putstr("OK\n");
// 	return (0);
// }

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
	if (!check_order(stack_a, stack_b))
		ft_putstr("KO\n");
	else
		ft_putstr("OK\n");
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