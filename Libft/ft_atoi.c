/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:11:43 by pamoreno          #+#    #+#             */
/*   Updated: 2019/11/24 19:14:15 by pamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_isspace(int c)
{
	if (c == ' ' ||
		c == '\n' ||
		c == '\t' ||
		c == '\r' ||
		c == '\f' ||
		c == '\v')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	long long int			i;
	int						sign;
	unsigned long long		res;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = 0;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (res > 0x7fffffffffffffff)
		return (sign == 0 ? 0 : -1);
	return (sign == 1 ? res : -res);
}
