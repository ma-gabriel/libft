/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 06:59:49 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 14:37:23 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief reimplementation of the function atoi.
 * Its behavior is described in the man page
 */
int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	long	res;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res * 10 + (str[i] - '0') < res)
			return (-(sign == 1));
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
