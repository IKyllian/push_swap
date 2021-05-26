#include "push_swap.h"

int	ft_lstsize(t_list *list)
{
	int	i;

	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

t_list	*ft_lstnew(int nb)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->nb = nb;
	list->next = NULL;
	return (list);
}

t_list	*ft_lstlast_list(t_list *list)
{
	if (!list)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	tmp = ft_lstlast_list(*alst);
	tmp->next = new;
}

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst)
		*alst = new;
	else
	{
		new->next = *alst;
		*alst = new;
	}
}