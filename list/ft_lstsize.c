/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:55:49 by agourrag          #+#    #+#             */
/*   Updated: 2019/10/29 17:56:14 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int			res;

	tmp = lst;
	res = 0;
	while (tmp)
	{
		res++;
		tmp = tmp->next;
	}

	return (res);
}
