/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:11:01 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/20 20:21:23 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	while (del && lst && *lst)
	{
		if (del)
			(*del)((*lst)->content);
		free(*lst);
		(*lst) = (*lst)->next;
	}
	*lst = 0;
}
