/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:06:07 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 22:15:41 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * Allocates memory (using malloc(3)) and returns a
 * copy of ’s1’ with characters from ’set’ removed
 * from the beginning and the end.
 * @param s: The string to be trimmed.
 * @param set: The string containing the set of characters to be removed
 * @returns The trimmed string.
 * NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s, char const *set)
{
	const size_t	len = ft_strlen(s);
	size_t			start;
	size_t			end;

	start = 0;
	while (ft_strchr((char *) set, s[start]))
		if (!s[start++])
			return (ft_strdup(""));
	end = 0;
	while (ft_strchr((char *) set, s[len - 1 - end]))
		end++;
	return (ft_substr(s, start, len - end - start));
}
