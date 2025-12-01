/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 07:35:47 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 14:37:56 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief reimplementation of the function calloc.
 * Its behavior is described in the man page
 */
void	*ft_calloc(size_t num, size_t size)
{
	void	*res;

	if (num && size && ((num * size) / num != size))
		return (NULL);
	res = malloc(num * size);
	if (!res)
		return (NULL);
	ft_bzero(res, num * size);
	return (res);
}
