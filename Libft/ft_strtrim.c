/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 18:18:29 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/21 16:17:12 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_counttrim(char c1, char const *set1)
{
	int		j;

	j = 0;
	while (set1[j] != '\0')
	{
		if (c1 == set1[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*array;
	char	*ptr;
	size_t	b;
	size_t	e;

	if (!s1)
		return (0);
	b = 0;
	e = ft_strlen(s1) - 1;
	while (ft_counttrim(s1[b], set))
		b++;
	while (ft_counttrim(s1[e], set) && e != 0)
		e--;
	if (b < ft_strlen(s1))
		array = ((char*)malloc(e - b + 2));
	else
		return (ft_strdup(""));
	if (array == '\0')
		return (0);
	ptr = array;
	while (b <= e)
		*array++ = s1[b++];
	*array = '\0';
	return (ptr);
}
