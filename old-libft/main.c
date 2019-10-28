/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 09:04:38 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/18 20:41:51 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
	|| c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi(const char *str)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str > '9' || *str < '0')
			break ;
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (sign * res);
}

int main(int argc, char **argv) {
	if (argc == 1) {
		printf("no arguments given");
	}
	printf("%d\noriginal: %d", ft_atoi(argv[1]), atoi(argv[1]));

	return (0);
}
