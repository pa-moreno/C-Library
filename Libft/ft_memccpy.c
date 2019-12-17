/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:49:38 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/24 18:04:17 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	t_uchar	*d;
	t_uchar	*s;

	d = (t_uchar*)dst;
	s = (t_uchar*)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (t_uchar)c)
			return (d + i + 1);
		i++;
	}
	return (0);
}
