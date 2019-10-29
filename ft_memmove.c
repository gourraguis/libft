/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:37:51 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/29 11:54:49 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = dst;
	p2 = src;

	if (p1 > p2)
		while (len--)
			*(p1++) = *(p2)++;
	else
	{
		i = 0;
		while (++i < len)
			*(p1 + len - i) = *(p2 + len - i);
	}
	return (dst);
}
