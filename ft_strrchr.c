/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:32:38 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 17:34:49 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief reimplementation of the function strrchr.
 * Its behavior is described in the man page
 */
char	*ft_strrchr(char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (i != (size_t) -1)
	{
		if (str[i] == (char) c)
			return (str + i);
		i--;
	}
	return (0);
}
