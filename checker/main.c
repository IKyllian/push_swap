/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:14:43 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/02 12:16:21 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int argc, char **argv)
{
	t_stack stack_a;
	t_stack stack_b;
	char	*line;
	
	if (argc < 2)
		ft_putstr("Error\n");
	stack_a = init_list();
	stack_b = init_list();
	if (!parsing(argv, &stack_a))
		return (1);
	print_stacks(&stack_a, &stack_b);
	while (get_next_line(0, &line))
	{
		if (!check_cmd(line, &stack_a, &stack_b))
			ft_putstr("Error: L'instruction n\'existe pas\n");
		else
			print_stacks(&stack_a, &stack_b);
	}
	if (!check_order(&stack_a, &stack_b))
		ft_putstr("KO\n");
	else
		ft_putstr("OK\n");
	return (0);
}