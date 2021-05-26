#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

typedef struct	s_list
{
	int				nb;
	struct s_list	*next;
}				t_list;

/*			LIST_UTILS           */
int		ft_lstsize(t_list *list);
t_list	*ft_lstnew(int nb);
t_list	*ft_lstlast_list(t_list *list);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstadd_front(t_list **alst, t_list *new);

/*			   SWAP             */
void	ft_swap(int *nb1, int *nb2);
void	ft_ss(t_list list_a, t_list list_b);

/*			   PUSH             */
void	ft_pa(t_list **list_a, t_list **list_b);
void	ft_pb(t_list **list_a, t_list **list_b);

/*			   ROTATE             */
void	ft_rotate(t_list **list);
void	ft_rr(t_list **list_a, t_list **list_b);
void	ft_reverse_rotate(t_list **list);
void	ft_rrr(t_list **list_a, t_list **list_b);

#endif