/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:49:38 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/24 18:05:31 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	t_uchar	*d;
	t_uchar	*s;
	int		i;

	i = 0;
	if (dst == '\0' && src == '\0')
		return (0);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		d = (t_uchar*)dst + len;
		s = (t_uchar*)src + len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}
