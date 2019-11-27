/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:26:33 by agourrag          #+#    #+#             */
/*   Updated: 2019/11/27 06:37:53 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*res;

	i = 0;
	j = 0;
	while (j < len && haystack[j] != '\0')
	{
		if (needle[i] == '\0')
			return (char*)(res);
		if (haystack[j] == needle[i])
		{
			if (i == 0)
				res = haystack + j;
			i++;
		}
		else
			i = 0;
		j++;
	}
	if (needle[i] == '\0')
		return (char*)(res);
	return (0);
}
