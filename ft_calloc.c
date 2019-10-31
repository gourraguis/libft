/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:12:48 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/31 13:22:20 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*res;
	size_t			i;

	res = malloc(count * size);
	i = 0;
	while (i < (count * size / sizeof(unsigned char)))
	{
		res[i] = 0;
		i++;
	}
	return ((void*)res);
}
