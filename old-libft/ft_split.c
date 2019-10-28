/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 09:47:47 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/18 20:32:49 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*extract_string(char const *s, char c, int *start)
{
	char	*res;
	int		i;

	s += *start;
	i = 0;
	while (s[i] != c)
		i++;
	if (!(res = malloc((i + 1) * sizeof(char))))
		return (0);
	i = -1;
	while (s[++i] != c)
		res[i] = s[i];
	res[i] = '\0';
	*start += i;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*tmp;
	int		count;
	int		i;
	int		current;

	count = 0;
	i = -1;
	while (s[++i] != '\0')
		count += s[i] == c;
	if (!(res = malloc((count + 2) * sizeof(char))))
		return (0);
	i = -1;
	current = -1;
	while (s[++i] != '\0')
	{
		if (s[i] == c)
			res[++current] = extract_string(s, c, &i);
	}
	res[current] = 0;
	return (res);
}
