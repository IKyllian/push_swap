/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:42:23 by kdelport          #+#    #+#             */
/*   Updated: 2021/05/28 16:12:42 by kdelport         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

t_stack	init_list(void)
{
	t_stack stack;

	stack.size = 0;
	stack.stack = NULL;
	return (stack);
}

int	check_list(t_stack *stack)
{
	int		i;
	int		j;
	t_list	*first;
	t_list	*list;
	t_list	*temp;
	
	list = stack->stack;
	first = list;
	i = 0;
	while (list && i++ < stack->size)
	{
		j = 0;
		temp = list->next;
		while (temp && j++ < stack->size)
		{
			printf("temp  = %i | list = %i\n", temp->nb, list->nb);
			if (temp->nb == list->nb)
				return (0);
			if (temp->next)
				temp = temp->next;
		}
		if (list->next)
			list = list->next;
	}
	return (1);
}

int	parsing(char **argv, t_stack *stack_a)
{
	int		i;
	int		j;
	int		nb;

	i = 0;
	while (argv[++i])
	{
		j = -1;
		nb = 0;
		while (argv[i][++j])
		{
			if (argv[i][j] != ' ' && argv[i][j] != '\t')
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					ft_putstr("Error: Invalid character\n");
					return (0);
				}
				else
					nb = nb * 10 + (argv[i][j] - 48); // Check si le nombre passe negatif pour overflow
			}
			else
			{
				ft_lstadd_back(stack_a, &stack_a->stack, ft_lstnew(stack_a, nb));
				nb = 0;
			}
		}
		ft_lstadd_back(stack_a, &stack_a->stack, ft_lstnew(stack_a, nb));
	}
	printf("nb 1 = %i | nb 2 - %i\n", stack_a->stack->nb, stack_a->stack->next->nb);
	// print_stacks(stack_a, stack_a);
	if (!check_list(stack_a))
	{
		ft_putstr("Error: Two numbers are same\n");
		return (0);
	}
	return (1);
}

// int main(int argc, char **argv)
// {
// 	t_stack stack_a;
// 	t_stack stack_b;
	
// 	if (argc < 2)
// 		ft_putstr("Error\n");
// 	stack_a = init_list();
// 	stack_b = init_list();
// 	if (parsing(argv, &stack_a))
// 	{
// 		print_list(&stack_a);
// 		ft_putstr("Success\n");
// 		return (1);
// 	}
// 	return (0);
// }

int	check_cmd(char *line, t_stack *stack_a, t_stack *stack_b)
{
	if (ft_strcmp(line, "sa") == 0)
		ft_swap(stack_a);
	else if (ft_strcmp(line, "sb") == 0)
		ft_swap(stack_b);
	else if (ft_strcmp(line, "ss") == 0)
		ft_ss(stack_a, stack_b);
	else if (ft_strcmp(line, "pa") == 0)
		ft_pa(stack_a, stack_b);
	else if (ft_strcmp(line, "pb") == 0)
		ft_pb(stack_a, stack_b);
	else if (ft_strcmp(line, "ra") == 0)
		ft_rotate(stack_a);
	else if (ft_strcmp(line, "rb") == 0)
		ft_rotate(stack_b);
	else if (ft_strcmp(line, "rr") == 0)
		ft_rr(stack_a, stack_b);
	else if (ft_strcmp(line, "rra") == 0)
		ft_reverse_rotate(stack_a);
	else if (ft_strcmp(line, "rrb") == 0)
		ft_reverse_rotate(stack_b);
	else if (ft_strcmp(line, "rrr") == 0)
		ft_rrr(stack_a, stack_b);
	else
		return (0);
	return (1);
}

int	check_order(t_stack *stack_a, t_stack *stack_b)
{
	t_list	*list;
	t_list	*first;
	t_list	*cpy;

	if (stack_b->size != 0)
		return (0);
	list = stack_a->stack;
	cpy = stack_a->stack;
	first = stack_a->stack;
	while (list)
	{
		cpy = list->next;
		while (cpy)
		{
			if (list->nb > cpy->nb)
				return (0);
			cpy = cpy->next;
		}
		list = list->next;
	}
	return (1);
}

int main(int argc, char **argv)
{
	t_stack stack_a;
	t_stack stack_b;
	char	*line;
	
	if (argc < 2)
		ft_putstr("Error\n");
	stack_a = init_list();
	stack_b = init_list();
	if (parsing(argv, &stack_a))
	{
		// print_list(&stack_a);
		// ft_putstr("Success\n");
		// return (1);
	}
	else
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