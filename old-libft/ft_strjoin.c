/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:35:34 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/17 17:43:48 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*res;

	len1 = 0;
	len2 = 0;
	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;
	if (!(res = malloc((len1 + len2) * sizeof(char))))
		return (0);
	i = 0;
	while (*s1 != '\0')
	{
		*(res + i) = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		*(res + i) = *s2;
		s2++;
		i++;
	}
	return (res);
}
