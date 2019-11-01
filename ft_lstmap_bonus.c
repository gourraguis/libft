/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:55:17 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/31 17:14:47 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;

	if (!lst)
		return (res);
	res = ft_lstnew(lst->content);
	lst = lst->next;
	tmp = res->next;
	while (lst)
	{
		tmp = ft_lstnew(lst->content);
		lst = lst->next;
		tmp = tmp->next;
	}
}
