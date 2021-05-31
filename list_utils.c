/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:42:16 by kdelport          #+#    #+#             */
/*   Updated: 2021/05/28 15:05:26 by kdelport         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack *stack)
{
	int i;
	t_list *list;

	list = stack->stack;
	i = 0;
	while (i++ <= stack->size)
	{
		printf("%i\n", list->nb);
		if (list->next)
			list = list->next;		
	}
}

void	print_stacks(t_stack *stack_a, t_stack *stack_b)
{
	int i;
	t_list *list_a;
	t_list *list_b;

	list_a = stack_a->stack;
	list_b = stack_b->stack;
	i = 0;
	printf("Size stack a - %i | Stack b = %i\n", stack_a->size, stack_b->size);
	while (i <= stack_a->size || i <= stack_b->size)
	{
		if (list_a)
			ft_putnbr(list_a->nb);
		ft_putstr("\t");
		if (list_b)
			ft_putnbr(list_b->nb);
		ft_putstr("\n");
		if (list_a)
			list_a = list_a->next;
		if (list_b)
			list_b = list_b->next;
		i++;
	}
	ft_putstr("----------");
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
	while (i++ < stack->size)
	{
		if (list->next)
			list = list->next;
	}
	return (list);
}

t_list	*ft_lstnew(t_stack *stack, int nb)
{
	t_list	*list;

	(void)stack;
	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->nb = nb;
	list->prev = NULL;
	list->next = NULL;
	return (list);
}

void	ft_lstadd_back(t_stack *stack, t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (!*alst)
		*alst = new;
	else
	{
		tmp = ft_lstlast(stack);
		new->prev = tmp;
		new->next = *alst;
		tmp->next = new;
	}
	stack->size++;
}

void	ft_lstadd_front(t_stack *stack, t_list **alst, t_list *new)
{
	t_list *last;

	if (!*alst)
		*alst = new;
	else
	{
		new->next = *alst;
		(*alst)->prev = new;
		*alst = new;
		last = ft_lstlast(stack);
		last->next = *alst;
	}
	stack->size++;
}