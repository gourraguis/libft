/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:49:27 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/18 09:45:32 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	check_char(char const c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		x;
	int		y;
	int		i;
	char	*res;

	len = 0;
	while (s1[len] != '\0')
		len++;
	x = 0;
	while (check_char(s1[x], set))
		x++;
	y = len - 1;
	while (check_char(s1[y], set))
		y--;
	if (!(res = malloc(len * sizeof(char))))
		return (0);
	i = 0;
	while (x + i <= y)
	{
		res[i] = s1[x + i];
		i++;
	}
	return (res);
}
