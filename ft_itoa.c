/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:25:08 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 14:38:06 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	const long	n_abs = ((n > 0) * 2 - 1) * (long) n;
	char		*res;
	long int	fact;
	long int	i;

	fact = 1;
	i = n < 1;
	while (fact <= n_abs)
	{
		fact *= 10;
		i++;
	}
	res = malloc((i + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[i] = 0;
	fact = 1;
	while (n / fact)
	{
		res[--i] = '0' + n_abs / fact % 10;
		fact *= 10;
	}
	if (n <= 0)
		res[0] = '-' + (n == 0) * ('0' - '-');
	return (res);
}
