/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:13:42 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 16:50:06 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const size_t	res = ft_strlen(src);

	if (!size)
		return (res);
	if (size > res)
		size = res + 1;
	ft_memmove(dst, src, size);
	dst[size - 1] = 0;
	return (res);
}
