/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:11:45 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/24 19:19:04 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = ft_strlen(s1);
	if (!(str = (char *)malloc(sizeof(*s1) * (i + 1))))
		return (NULL);
	ft_memcpy(str, s1, i);
	str[i++] = '\0';
	return (str);
}
