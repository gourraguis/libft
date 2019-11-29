/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:37:51 by agourrag          #+#    #+#             */
/*   Updated: 2019/11/28 12:27:16 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	if (!len || dst == src)
		return (dst);
	d = dst;
	s = src;
	if (d < s)
		while (len--)
			*(d++) = *(s)++;
	else
		while (len--)
			*(d + len) = *(s + len);
	return (dst);
}
