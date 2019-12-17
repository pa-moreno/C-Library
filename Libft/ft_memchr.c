/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:31:33 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/24 18:06:01 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	t_uchar	*d;

	d = (t_uchar*)s;
	i = 0;
	while (i < n)
	{
		if (d[i] == (t_uchar)c)
			return (d + i);
		i++;
	}
	return (0);
}
