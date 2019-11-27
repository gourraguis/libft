/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:53:12 by agourrag          #+#    #+#             */
/*   Updated: 2019/11/27 14:07:55 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *res;

	if ((res = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	res->content = content;
	res->next = NULL;
	return (res);
}
