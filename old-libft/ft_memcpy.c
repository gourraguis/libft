/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:24:38 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/17 16:41:35 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (src == 0 && dst == 0)
		return (dst);
	d = dst;
	s = src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}
