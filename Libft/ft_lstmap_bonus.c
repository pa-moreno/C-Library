/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:11:01 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/20 20:20:39 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list *temp;
	t_list *start;

	(void)del;
	if (!lst || !f)
		return (0);
	temp = ft_lstnew(f(lst));
	if (!temp)
		return (0);
	start = temp;
	while (lst->next)
	{
		lst = lst->next;
		temp->next = ft_lstnew(f(lst));
		temp = temp->next;
	}
	return (start);
}
