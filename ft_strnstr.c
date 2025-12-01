/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:57:07 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 17:27:00 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief reimplementation of the function strnstr.
 * Its behavior is described in the man page
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const size_t	little_len = ft_strlen(little);

	if (!little[0])
		return ((char *) big);
	while (*big && little_len <= len--)
	{
		if (ft_strncmp(big, little, little_len) == 0)
			return ((char *) big);
		big++;
	}
	return (0);
}
