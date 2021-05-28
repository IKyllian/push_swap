#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct	s_list
{
	int				nb;
	struct s_list	*prev;
	struct s_list	*next;
}				t_list;

typedef struct s_stack
{
	int		size;
	t_list	*stack;
}				t_stack;


/*			LIST_UTILS           */
t_list	*ft_lstlast(t_stack *stack);
t_list	*ft_lstnew(t_stack *list, int nb);
void	ft_lstadd_back(t_stack *stack, t_list **alst, t_list *new);
void	ft_lstadd_front(t_stack *stack, t_list **alst, t_list *new);
void	print_list(t_stack *stack);

/*			   SWAP             */
void	ft_swap(int *nb1, int *nb2);
void	ft_ss(t_stack list_a, t_stack list_b);

/*			   PUSH             */
void	ft_pa(t_stack *list_a, t_stack *list_b);
void	ft_pb(t_stack *list_a, t_stack *list_b);

/*			   ROTATE             */
void	ft_rotate(t_stack *list);
void	ft_rr(t_stack *list_a, t_stack *list_b);
void	ft_reverse_rotate(t_stack *list);
void	ft_rrr(t_stack *list_a, t_stack *list_b);

#endif