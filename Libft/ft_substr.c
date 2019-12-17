/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:46:48 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/18 12:35:18 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*array;
	size_t	c;

	if (!s)
		return (0);
	c = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	else
		array = (char*)malloc(len + 1);
	if (!array)
		return (0);
	while (c < len)
	{
		array[c] = s[start];
		c++;
		start++;
	}
	array[c] = '\0';
	return (array);
}
