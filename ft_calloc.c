/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:12:48 by agourrag          #+#    #+#             */
/*   Updated: 2019/11/27 14:08:41 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*res;

	if (count == 0 || size == 0)
		return (NULL);
	if (!(res = (unsigned char*)malloc(size * count)))
		return (NULL);
	ft_bzero(res, count * size);
	return ((void*)res);
}
