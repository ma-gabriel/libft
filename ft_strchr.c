/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:28:27 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 17:27:34 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief reimplementation of the function strchr.
 * Its behavior is described in the man page
 */
char	*ft_strchr(char *str, int c)
{
	if (!((char) c))
		return (str + ft_strlen(str));
	while (*str)
	{
		if (*str == (char) c)
			return (str);
		str++;
	}
	return (NULL);
}
