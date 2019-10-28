/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:06:40 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/18 09:17:28 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*res;
	size_t		i;

	if (!(res = malloc(len * sizeof(char))))
		return (0);
	i = start;
	while (i--)
		if (*(s + i) == '\0')
			return (res);
	i = 0;
	while (*(s + start + i) != '\0' && i < len)
	{
		*(res + i) = *(s + start + i);
		i++;
	}
	return (res);
}
