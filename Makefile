NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -I. -c
FILES = ft_lstnew.c
OBJECTS = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(FILES) list.h
	@gcc $(CFLAGS) $(FILES)
	@ar rc $(NAME) $(OBJECTS) # archive all objects in a single file
	@ranlib $(NAME) # generate index to archive

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all