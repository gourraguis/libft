#!/bin/bash

# make re && gcc -o out libft.a tests/ft_lstnew.c && ./out
gcc -o out $1.c tests/$1.c tests/helpers.c && ./out