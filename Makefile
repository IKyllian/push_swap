NAME = push_swap

HEADER = push_swap.h
SRCS =  main.c \
		list_utils.c \
		push.c \
		rotate.c \
		swap.c \
		get_next_line.c \
		get_next_line_utils.c \
		ft_strcmp.c \
		ft_putnbr.c \
		./checker/checker.c \
		ft_putstr.c \
		parsing.c \
		
OBJS = $(SRCS:.c=.o)

CC = gcc
FLAGS = -Wextra -Werror -Wall
RM = rm -f

all : $(NAME)
 
%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS) $(HEADER)
		$(CC) $(FLAGS) -o $@ $(OBJS)

run : $(NAME)
	./push_swap

clean :
		$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean re all run