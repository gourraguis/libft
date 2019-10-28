/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:49:21 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/17 14:07:34 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
