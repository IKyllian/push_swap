NAME_P_S = push_swap
NAME_CHECKER = checker

HEADER = push_swap.h
SRCS_P_S =  main.c \
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

SRCS_CHECKER = \
			./checker_src/checker.c \
			./checker_src/check.c \
			list_utils.c \
			./str/ft_strcmp.c \
			./str/ft_putnbr.c \
			./str/ft_putstr.c \
			./gnl/get_next_line.c \
			./gnl/get_next_line_utils.c \
			./operations/push.c \
			./operations/rotate.c \
			./operations/swap.c \
			./parsing/parsing.c \
			./parsing/set_pos.c \
			./sort/get_number.c \
			./free_errors.c \
			./parsing/itoa.c \
			./parsing/ft_split.c \
			./parsing/parsing_utils.c

OBJS_P_S = $(SRCS_P_S:.c=.o)
OBJS_CHECKER = $(SRCS_CHECKER:.c=.o)

CC = gcc
FLAGS = -Wextra -Werror -Wall
RM = rm -f

all : $(NAME_P_S) bonus
 
%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME_P_S) : $(OBJS_P_S) $(HEADER)
		$(CC) $(FLAGS) -o $@ $(OBJS_P_S)

bonus : $(OBJS_CHECKER) $(HEADER)
		$(CC) $(FLAGS) -o $(NAME_CHECKER) $(OBJS_CHECKER)

clean :
		$(RM) $(OBJS_P_S)
		$(RM) $(OBJS_CHECKER)

fclean : clean
		$(RM) $(NAME_P_S)
		$(RM) $(NAME_CHECKER)

re : fclean all

.PHONY : clean fclean re all run bonus