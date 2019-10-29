# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 18:27:32 by agourrag          #+#    #+#              #
#    Updated: 2019/10/29 18:27:33 by agourrag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
FLAGS=-Wall -Werror -Wextra -c
CC=gcc
SRCS=ft_strlen.c \
	 ft_memcpy.c \
OBJS=(:.c=.o)


$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	find . -name "*.o" -delete
	ranlib $(NAME)

all: $(NAME)

%.o: %.c
	@$(CC) $(FLAGS)  $< -o $@

clean:
	rm -f *.o *.a

fclean:
	rm -f $(NAME)

re: fclean all
