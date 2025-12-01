/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 01:10:47 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 16:19:12 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * Allocates memory (using malloc(3)) and returns a
 * new string, which is the result of concatenating
 * ’s1’ and ’s2’.
 * @param s1: The prefix string.
 * @param s2: The suffix string.
 * @returns The new string.
 * NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	const size_t	len1 = ft_strlen(s1);
	const size_t	len2 = ft_strlen(s2);
	char			*res;

	res = malloc((len1 + len2 + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_memmove(res, s1, len1);
	ft_memmove(res + len1, s2, len2 + 1);
	return (res);
}
