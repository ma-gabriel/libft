/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 03:26:58 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 15:38:11 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief reimplementation of the function memmove.
 * Its behavior is described in the man page
 */
void	*ft_memmove(void *dest, const void *src, size_t count)
{
	const int	direction = (src > dest) * 2 - 1;
	char		*s1;

	if (dest == src)
		return (dest);
	s1 = dest + (count - 1) * (direction == -1);
	src += (count - 1) * (direction == -1);
	while (count--)
	{
		*s1 = *(char *)src;
		src += direction;
		s1 += direction;
	}
	return (dest);
}
