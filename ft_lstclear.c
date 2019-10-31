/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:30:41 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/31 16:47:13 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next;

	curr = *lst;
	next = (*lst)->next;
	while (curr)
	{
		ft_lstdelone(curr, del);
		curr = next;
		if (curr)
			next = curr->next;
	}
	*lst = 0;
}
