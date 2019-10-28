NAME=libft.a
FLAGS=-Wall -Werror -Wextra -c
CC=gcc


$(NAME):
	@$(CC) $(FLAGS) *.c
	ar rc $(NAME) *.o
	find . -name "*.o" -delete
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f *.o *.a

fclean:
	rm -f $(NAME)

re: fclean all