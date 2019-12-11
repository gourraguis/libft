/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:09:07 by agourrag          #+#    #+#             */
/*   Updated: 2019/12/12 15:32:33 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	tmp;

	tmp = c;
	while (*s)
	{
		if (*s == tmp)
			return ((char *)s);
		s++;
	}
	if (*s == tmp)
		return ((char *)s);
	return (0);
}
