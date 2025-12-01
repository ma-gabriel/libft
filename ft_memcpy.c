/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:04:29 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 15:24:01 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief reimplementation of the function memcpy.
 * Its behavior is described in the man page
 */
void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	char	*s1;

	if (dest == src)
		return (dest);
	s1 = dest;
	while (count--)
		*s1++ = *(char *)(src++);
	return (dest);
}
