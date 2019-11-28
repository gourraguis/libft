/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 08:40:02 by agourrag          #+#    #+#             */
/*   Updated: 2019/11/28 06:26:45 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t n1;
	size_t n2;

	n1 = ft_strlen(src);
	n2 = ft_strlen(dst);
	if (n2 > size)
		n2 = size;
	if (n2 == size)
		return (size + n1);
	if (n1 + n2 < size)
		ft_memcpy(dst + n2, src, n1 + 1);
	else
	{
		ft_memcpy(dst + n2, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (n1 + n2);
}
