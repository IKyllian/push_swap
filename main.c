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
	if (!check_list(stack_a))
	{
		ft_putstr("Error: Two numbers are same\n");
		return (0);
	}
	return (1);
}

int main(int argc, char **argv)
{
	t_stack stack_a;
	t_stack stack_b;
	
	if (argc < 2)
		ft_putstr("Error\n");
	stack_a = init_list();
	stack_b = init_list();
	if (parsing(argv, &stack_a))
	{
		print_list(&stack_a);
		ft_putstr("Success\n");
		return (1);
	}
	return (0);
}