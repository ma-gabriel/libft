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

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i;

	if (!length)
		return (0);
	i = 0;
	while (first[i] && i < length - 1)
	{
		if (first[i] - second[i])
			return (((unsigned char) first[i]
					- (unsigned char) second[i]));
		i++;
	}
	return (((unsigned char) first[i] - (unsigned char) second[i]));
}
