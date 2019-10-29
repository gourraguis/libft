/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:32:58 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/28 14:08:05 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char*)dst;
	s = (const unsigned char*)src;
	while (n--)
	{
		if (*s == c)
		{
			return (d + 1);
		}
		*d = *s;
		d++;
		s++;
	}
	return (0);
}
