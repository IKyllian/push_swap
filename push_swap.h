#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct	s_list
{
	int				nb;
	int				pos;
	struct s_list	*prev;
	struct s_list	*next;
}				t_list;

typedef struct s_stack
{
	int		size;
	t_list	*stack;
}				t_stack;

/*			GNL           */
int		ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, int size);
int		contain_newline(char *str);
char	*ft_strjoin(char const *s1, char const *s2, int *error);
int		get_line_read(char *str, char **line, int *index);
int		get_next_line(int fd, char **line);

/*			STR           */
int		ft_strcmp(const char *str1, const char *str2);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putstr(char *str);

void	print_stacks(t_stack *stack_a, t_stack *stack_b);

t_stack	init_list(void);

/*			SORT           */
void	sort_three(t_stack *stack_a);
void	sort_five(t_stack *stack_a, t_stack *stack_b);

/*			PARSING           */
int		parsing(char **argv, t_stack *stack_a);
void	fill_pos(t_list *min, t_list *max, t_list *first, t_stack *stack_a);
void	set_pos(t_stack *stack_a);

int		check_cmd(char *line, t_stack *stack_a, t_stack *stack_b);
int		check_order(t_stack *stack_a, t_stack *stack_b);

/*			LIST_UTILS           */
t_list	*ft_lstlast(t_stack *stack);
t_list	*ft_lstnew(t_stack *list, int nb, int pos);
void	ft_lstadd_back(t_stack *stack, t_list **alst, t_list *new);
void	ft_lstadd_front(t_stack *stack, t_list **alst, t_list *new);
void	print_list(t_stack *stack);

/*			   SWAP             */
void	ft_swap(t_stack *stack, int must_print, char which_stack);
void	ft_ss(t_stack *stack_a, t_stack *stack_b, int must_print);

/*			   PUSH             */
void	ft_pa(t_stack *stack_a, t_stack *stack_b, int must_print);
void	ft_pb(t_stack *stack_a, t_stack *stack_b, int must_print);

/*			   ROTATE             */
void	ft_rotate(t_stack *list, int must_print, char which_stack);
void	ft_rr(t_stack *stack_a, t_stack *stack_b, int must_print);
void	ft_reverse_rotate(t_stack *list, int must_print, char which_stack);
void	ft_rrr(t_stack *stack_a, t_stack *stack_b, int must_print);

#endif