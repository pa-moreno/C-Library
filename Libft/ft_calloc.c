/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:43:06 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/24 19:19:24 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	t_uchar	*tab;
	size_t	i;

	i = 0;
	if (!(tab = (t_uchar *)malloc(size * count)))
		return (NULL);
	while (i < count * size)
		tab[i++] = '\0';
	return (tab);
}
