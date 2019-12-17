/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstrn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:45:38 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/24 18:13:47 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	str[size] = '\0';
	while (size--)
		str[size] = '\0';
	return (str);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	char	*str;

	if (needle[0] == '\0' || needle == NULL)
		return ((char*)haystack);
	i = 0;
	str = ft_strnew(len);
	while (haystack[i] != '\0' && i < len)
	{
		c = 0;
		while (needle[c] == haystack[i + c] && i + c < len)
		{
			if (needle[c + 1] == '\0')
			{
				return ((char*)haystack + i);
			}
			c++;
		}
		i++;
	}
	return (0);
}
