/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 05:34:42 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 15:14:43 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief reimplementation of the function memcmp.
 * Its behavior is described in the man page
 */
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1 = str1;
	const unsigned char	*s2 = str2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (s1[i] - s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
