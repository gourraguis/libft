/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:09:07 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/17 10:18:35 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	const char *res;

	res = s;
	while (*res != '\0')
	{
		if (*res == c)
		{
			return (char*)(res);
		}
		res++;
	}
	if (c == '\0')
	{
		return (char*)(res);
	}
	return (0);
}
