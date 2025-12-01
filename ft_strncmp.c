/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:48:30 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 17:16:55 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief reimplementation of the function strncpm.
 * Its behavior is described in the man page
 */
int	ft_strncmp(const char *first, const char *second, size_t length)
{
	const unsigned char	*s1 = (const unsigned char *) first;
	const unsigned char	*s2 = (const unsigned char *) second;
	size_t				i;

	i = 0;
	while (i < length)
	{
		if (!s1[i] || s1[i] - s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
