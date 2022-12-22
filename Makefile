NAME	= push_swap
SRCS	= $(wildcard ./*.c) \
		$(wildcard assistant_functions/*.c) \
		$(wildcard control_functions/*.c) \
		$(wildcard instructions_functions/*.c) \
		$(wildcard sorting_algorithms/*.c)
OBJS	= $(SRCS:.c=.o)
CFLAGS	= -Wall -Wextra -Werror
PF		= ft_printf/libftprintf.a
LBFT	= libft/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(PF) $(LBFT)
	gcc $(CFLAGS) $(LBFT) $(PF) $(OBJS) -o $(NAME)

$(LBFT):
	make -C ./libft

$(PF):
	make -C ./ft_printf

clean:
	make -C ./ft_printf fclean
	make -C ./libft fclean
	rm -rf $(OBJS)

fclean: clean
	rm -rf push_swap

re: fclean all

.PHONY: clean fclean re all