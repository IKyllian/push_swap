NAME = checker

HEADER = ../push_swap.h
SRCS = \
	checker.c \
	check.c \
	../list_utils.c \
	../str/ft_strcmp.c \
	../str/ft_putnbr.c \
	../str/ft_putstr.c \
	../gnl/get_next_line.c \
	../gnl/get_next_line_utils.c \
	../operations/push.c \
	../operations/rotate.c \
	../operations/swap.c \
	../parsing/parsing.c \
	../parsing/set_pos.c \
	../sort/get_number.c \
	../free_errors.c \
	../parsing/itoa.c \
	../parsing/ft_split.c \
	../parsing/parsing_utils.c

OBJS = $(SRCS:.c=.o)

CC = gcc
FLAGS = -Wextra -Werror -Wall
RM = rm -f

all : $(NAME)
 
%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS) $(HEADER)
		$(CC) $(FLAGS) -o $@ $(OBJS)

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean re all run