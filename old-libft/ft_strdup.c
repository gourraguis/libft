/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:39:31 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/17 16:30:31 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strdup(const char *s1)
{
	int		len;
	int		i;
	char	*res;

	len = 0;
	while (*(s1 + len) != '\0')
		len++;
	res = malloc(len * sizeof(char));
	i = 0;
	while (*s1 != '\0')
	{
		*(res + i) = *s1;
		s1++;
		i++;
	}
	return (res);
}
