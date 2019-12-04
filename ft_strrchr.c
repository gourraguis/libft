/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:19:57 by agourrag          #+#    #+#             */
/*   Updated: 2019/12/04 08:46:50 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *res;

	res = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			res = s;
		}
		s++;
	}
	if (c == '\0')
	{
		res = s;
	}
	return (char*)(res);
}
