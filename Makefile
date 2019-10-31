# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 18:27:32 by agourrag          #+#    #+#              #
#    Updated: 2019/10/31 16:03:55 by agourrag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
FLAGS=-Wall -Werror -Wextra -c
CC=gcc
SRCS=ft_strlen.c \
	 ft_memcpy.c \
	 ft_memset.c \
	 ft_bzero.c \
	 ft_memcpy.c \
	 ft_memccpy.c \
	 ft_memmove.c \
	 ft_memchr.c \
	 ft_memcmp.c \
	 ft_strlen.c \
	 ft_strchr.c \
	 ft_strrchr.c \
	 ft_isalpha.c \
	 ft_isdigit.c \
	 ft_isalnum.c \
	 ft_isascii.c \
	 ft_isprint.c \
	 ft_toupper.c \
	 ft_tolower.c \
	 ft_substr.c \
	 ft_strjoin.c \
	 ft_strtrim.c \
	 ft_split.c \
	 ft_itoa.c \
	 ft_strmapi.c \
	 ft_putchar_fd.c \
	 ft_putstr_fd.c \
	 ft_putendl_fd.c \
	 ft_putnbr_fd.c \
	 ft_calloc.c
BONUS_SRCS=ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c
OBJS=$(SRCS:.c=.o)
BONUS_OBJS=$(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(FLAGS)  $< -o $@

clean:
	rm -f *.o *.a

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean bonus
