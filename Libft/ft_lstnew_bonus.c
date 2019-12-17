/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:55:01 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/21 16:24:23 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen2(const char *str)
{
	int s;

	s = 0;
	while (str[s] != '\0')
		s++;
	return (s);
}

t_list			*ft_lstnew(void *content)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	if (!new)
		return (0);
	if (!content)
		new->content = 0;
	else
	{
		new->content = malloc(sizeof(t_list));
		ft_memcpy(new->content, content, ft_strlen2(content));
	}
	new->next = 0;
	return (new);
}
