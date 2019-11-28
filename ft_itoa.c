/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 16:27:11 by agourrag          #+#    #+#             */
/*   Updated: 2019/11/28 11:49:41 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_number_length(int n)
{
	int res;

	res = 0;
	if (n < 0)
		res++;
	while (n)
	{
		res++;
		n /= 10;
	}
	return (res + 1);
}

char	*ft_reverse(char *str)
{
	char	tmp;
	int		len;
	int		i;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	return (ft_itoa_base(n, 10));
}
