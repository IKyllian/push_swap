#include "push_swap.h"

void	ft_rotate(t_list **list)
{
	t_list *temp;

	if (ft_lstsize((*list)) > 1)
	{
		ft_lstadd_back(list, ft_lstnew((*list)->nb));
		temp = (*list);
		list = (*list)->next;
		free(temp);
	}
}

void	ft_rr(t_list **list_a, t_list **list_b)
{
	ft_rotate(list_a);
	ft_rotate(list_b);
}

void	ft_reverse_rotate(t_list **list)
{
	t_list *last;

	if (ft_lstsize((*list)) > 1)
	{
		last = ft_lstlast_list((*list));	
		ft_lstadd_front(list, ft_lstnew(last->nb));
		free(last);
	}
}

void	ft_rrr(t_list **list_a, t_list **list_b)
{
	ft_reverse_rotate(list_a);
	ft_reverse_rotate(list_b);
}