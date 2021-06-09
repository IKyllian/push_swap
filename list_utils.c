/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:42:16 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/08 15:50:46 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

t_list	*ft_lstlast(t_stack *stack)
{
	t_list	*list;
	int		i;

	i = 0;
	list = stack->stack;
	if (!list)
		return (NULL);
	while (++i < stack->size)
		if (list->next)
			list = list->next;
	return (list);
}

void	fill_stack_a(t_stack *stack_a, t_stack *stack_b)
{
	int		half;
	int		index_pos;
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
				ft_rotate(stack_b, 1, "rb\n");
		}
		else
		{
			while (stack_b->stack->nb != biggest->nb)
				ft_reverse_rotate(stack_b, 1, "rrb\n");
		}
		ft_pa(stack_a, stack_b, 1);
	}
}

t_list	*ft_lstnew(int nb, int pos)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->nb = nb;
	list->pos = pos;
	list->prev = NULL;
	list->next = NULL;
	return (list);
}

void	ft_lstadd_back(t_stack *stack, t_list **alst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*alst)
		*alst = new;
	else
	{
		last = ft_lstlast(stack);
		new->prev = last;
		new->next = *alst;
		last->next = new;
		(*alst)->prev = new;
	}
	stack->size++;
}

void	ft_lstadd_front(t_stack *stack, t_list **alst, t_list *new)
{
	t_list	*last;

	if (!*alst)
		*alst = new;
	else
	{
		last = ft_lstlast(stack);
		last->next = new;
		new->next = *alst;
		new->prev = last;
		(*alst)->prev = new;
		*alst = new;
	}
	stack->size++;
}
