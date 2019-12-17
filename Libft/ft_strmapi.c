/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:21:40 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/16 16:34:57 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*array;
	unsigned int	c;

	c = 0;
	if (!s || !f)
		return (0);
	array = ft_strdup(s);
	if (array == '\0')
		return (0);
	while (array[c] != '\0')
	{
		array[c] = f(c, s[c]);
		c++;
	}
	array[c] = '\0';
	return (array);
}
