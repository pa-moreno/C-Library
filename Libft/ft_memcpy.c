/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:49:38 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/24 17:58:30 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	t_uchar	*s;
	t_uchar	*d;

	d = (t_uchar *)dst;
	s = (t_uchar *)src;
	i = 0;
	if (dst == '\0' && src == '\0')
		return (0);
	if (!n || dst == src)
		return (dst);
	while (n--)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
