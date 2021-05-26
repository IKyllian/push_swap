#include "push_swap.h"

void	ft_pa(t_list **list_a, t_list **list_b)
{
	t_list *temp;

	if (ft_lstsize(list_b) != 0)
	{
		ft_lstadd_front(list_a, ft_lstnew((*list_b)->nb));
		if (ft_lstsize(list_b) > 1)
		{
			temp = (*list_b);
			list_b = (*list_b)->next;
			free(temp);
		}
		else
			free((*list_b));
	}
}

void	ft_pb(t_list **list_a, t_list **list_b)
{
	t_list *temp;
	
	if (ft_lstsize(list_a) != 0)
	{
		ft_lstadd_front(list_b, ft_lstnew((*list_a)->nb));
		if (ft_lstsize(list_a) > 1)
		{
			temp = (*list_a);
			list_a = (*list_a)->next;
			free(temp);
		}
		else
			free((*list_a));
	}
}