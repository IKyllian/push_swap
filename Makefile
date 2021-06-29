NAME = push_swap

HEADER = push_swap.h
SRCS =  main.c \
		list_utils.c \
		./checker_src/check.c \
		./operations/push.c \
		./operations/rotate.c \
		./operations/swap.c \
		./str/ft_strcmp.c \
		./str/ft_putnbr.c \
		./str/ft_putstr.c \
		./parsing/parsing.c \
		./parsing/set_pos.c \
		./sort/sort.c \
		./sort/get_number.c \
		./sort/chunk.c \
		./free_errors.c \
		./parsing/itoa.c \
		./parsing/ft_split.c \
		./parsing/parsing_utils.c \

OBJS = $(SRCS:.c=.o)

CC = gcc
FLAGS = -Wextra -Werror -Wall
RM = rm -f

all : $(NAME)
 
%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS) $(HEADER)
		$(CC) $(FLAGS) -o $@ $(OBJS)

bonus : $(NAME) $(HEADER)
		make -C ./checker_src

clean :
		$(RM) $(OBJS)
		make -C ./checker_src clean

fclean : clean
		$(RM) $(NAME)
		make -C ./checker_src fclean

re : fclean all

.PHONY : clean fclean re all run bonus