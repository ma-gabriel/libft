/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:29:07 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 15:43:57 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief reimplementation of the function memset.
 * Its behavior is described in the man page
 */
void	*ft_memset(void *str, int c, size_t num)
{
	while (num--)
		((char *)str)[num] = c;
	return (str);
}
