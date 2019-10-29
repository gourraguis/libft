/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:43:17 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/29 17:49:14 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	if (!(res = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (0);
	i = -1;
	while (s[++i] != '\0')
		res[i] = f(i, s[i]);
	res[i] = '\0';
	return (res);
}
