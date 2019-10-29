/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:45:09 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/29 14:30:05 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_char_occurences(const char *s, char c)
{
	int res;

	res = 0;
	while (*s != '\0')
	{
		if (*s == c)
			res++;
		s++;
	}

	return (res);
}

int		ft_count_until_char(const char *s, char c)
{
	int res;

	res = 0;
	while (*s != '\0' && *s != c)
	{
		res++;
		s++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		count;

	count = ft_count_char_occurences(s, c) + 1;
	if (!(res = malloc((count + 1) * sizeof(char*))))
		return (0);
	i = 0;
	while (i < count)
	{
		if (!(res[i] = malloc((ft_count_until_char(s, c)) * sizeof(char))))
			return (0);
		j = 0;
		while (*s != c && *s != '\0')
			res[i][j++] = *(s++);
		s++;
		i++;
	}
	res[i] = 0;
	return (res);
}
