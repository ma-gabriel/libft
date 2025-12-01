/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:53:22 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 16:39:49 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief reimplementation of the function strlcat.
 * Its behavior is described in the man page
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	const size_t	len_src = ft_strlen(src);
	const size_t	len_dest = ft_strlen(dest);

	if (size <= len_dest)
		return (size + len_src);
	ft_strlcpy(dest + len_dest, src, size - len_dest);
	return (len_src + len_dest);
}
