/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:09:07 by agourrag          #+#    #+#             */
/*   Updated: 2019/11/27 13:47:26 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*res;

	if (c == '\0')
		res = (char *)(s + ft_strlen(s));
	else
		res = ft_memchr(s, c, ft_strlen(s));
	return (res);
}
