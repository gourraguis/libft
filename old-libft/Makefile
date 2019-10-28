# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 13:13:01 by agourrag          #+#    #+#              #
#    Updated: 2019/10/17 13:20:15 by agourrag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
