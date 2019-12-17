/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:44:47 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/19 17:22:19 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*itoa;
	int		len;
	int		nb;

	len = ((n <= 0) ? 1 : 0);
	nb = n;
	while (++len && nb)
		nb = nb / 10;
	if (!(itoa = malloc(sizeof(char) * len)))
		return (0);
	itoa[--len] = '\0';
	*itoa = '0';
	nb = n;
	while (nb)
	{
		itoa[--len] = '0' + ((n < 0) ? -1 : 1) * (nb % 10);
		nb = nb / 10;
	}
	if (n < 0)
		*itoa = '-';
	return (itoa);
}
