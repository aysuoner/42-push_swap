NAME = libftprintf.a

SRC = ft_put_pointer.c \
	ft_putcharp.c \
	ft_putnbrp.c \
	ft_putstrp.c \
	ft_put_base.c \
	ft_printf.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)
	gcc -Wall -Wextra -Werror -c $(SRC)
	
clean:
	rm -rf $(OBJ)
	
fclean: clean
	rm -rf $(NAME)

re: fclean all
	
.PHONY: clean fclean re all
