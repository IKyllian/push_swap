#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
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

t_stack	init_list(void);

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

/*			ERROR / FREE           */
void	free_linked_list(t_list *list, int size);
void	free_stacks(t_stack *stack_a, t_stack *stack_b);
void	ft_error(t_stack *stack_a, t_stack *stack_b);

/*			SORT           */
void	sort_three(t_stack *stack_a, t_stack *stack_b);
void	sort_four(t_stack *stack_a, t_stack *stack_b);
void	sort_five(t_stack *stack_a, t_stack *stack_b);
void	sort_hundred(t_stack *stack_a, t_stack *stack_b, int size_a);
void	sort_five_hundred(t_stack *stack_a, t_stack *stack_b, int size_a);

/*			CHUNK / GET NBR           */
void	set_chunk_limit500(t_stack *stack, int size, int *limit, int chunk);
void	set_chunk_limit100(t_stack *stack, int size, int *limit, int chunk);
t_list	*get_biggest(t_stack *stack, int *index_pos);
int		get_smallest(t_stack *stack, int limit, int chunk, int reverse);

/*			PARSING           */
int		parsing(char **argv, t_stack *stack_a);
void	fill_pos(t_list *min, t_list *max, t_list *first, t_stack *stack_a);
void	set_pos(t_stack *stack_a);

int		check_cmd(char *line, t_stack *stack_a, t_stack *stack_b);
int		check_order(t_stack *stack_a, t_stack *stack_b);

/*			LIST_UTILS           */
t_list	*ft_lstlast(t_stack *stack);
t_list	*ft_lstnew(int nb, int pos, t_stack *stack_a, t_stack *stack_b);
void	ft_lstadd_back(t_stack *stack, t_list **alst, t_list *new);
void	ft_lstadd_front(t_stack *stack, t_list **alst, t_list *new);
void	print_list(t_stack *stack);
void	fill_stack_a(t_stack *stack_a, t_stack *stack_b);

/*			   SWAP             */
void	ft_swap(t_stack *stack, int must_print, char *str);
void	ft_ss(t_stack *stack_a, t_stack *stack_b, int must_print);

/*			   PUSH             */
void	ft_pa(t_stack *stack_a, t_stack *stack_b, int must_print);
void	ft_pb(t_stack *stack_a, t_stack *stack_b, int must_print);

/*			   ROTATE             */
void	ft_rotate(t_stack *list, int must_print, char *str, t_stack *stack_b);
void	ft_rr(t_stack *stack_a, t_stack *stack_b, int must_print);
void	ft_reverse_rotate(t_stack *list, int print, char *str, t_stack *stck_b);
void	ft_rrr(t_stack *stack_a, t_stack *stack_b, int must_print);

#endif