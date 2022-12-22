NAME = libft.a

SRC = ft_bzero.c \
	ft_isdigit.c \
	ft_calloc.c \

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