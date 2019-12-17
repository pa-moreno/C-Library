/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:19:06 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/20 20:20:14 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		count_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			words++;
			while (*s && *s != c)
				s++;
		}
	}
	return (words);
}

static size_t		word_size(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

char				**ft_split(char const *s, char c)
{
	char	**array;
	size_t	word_number;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	word_number = count_words(s, c);
	array = (char**)malloc(sizeof(char*) * (word_number + 1));
	if (!array)
		return (0);
	i = 0;
	j = 0;
	while (i < word_number)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		array[i] = ft_substr(s, j, word_size(s + j, c));
		while (s[j] != '\0' && s[j] != c)
			j++;
		i++;
	}
	array[i] = 0;
	return (array);
}
