/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:03:53 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/14 17:01:28 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*array;
	char	*ptr;
	size_t	l;

	if (!(s1 && s2))
		return (0);
	l = 0;
	array = malloc(sizeof(char) * ((ft_strlen(s1)) + 1 + ((ft_strlen(s2)))));
	if (array == '\0')
		return (0);
	ptr = array;
	while (s1[l] != '\0')
	{
		*array++ = s1[l];
		l++;
	}
	l = 0;
	while (s2[l] != '\0')
	{
		*array++ = s2[l];
		l++;
	}
	*array = '\0';
	return (ptr);
}
