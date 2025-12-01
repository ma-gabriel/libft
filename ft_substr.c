/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:59:08 by geymat            #+#    #+#             */
/*   Updated: 2023/11/16 19:22:29 by geymat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * Allocates memory (using malloc(3)) and returns a
 * substring from the string ’s’.
 * The substring starts at index ’start’ and has a
 * maximum length of ’len’.
 * @param s: The original string from which to create the substring.
 * @param start: The starting index of the substring within ’s’.
 * @param len: The maximum length of the substring.
 * @returns The substring.
 * NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const size_t	s_len = ft_strlen(s);
	char			*res;

	if (s_len < start)
		return (ft_strdup(""));
	if (s_len - start <= len)
		len = s_len - start;
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
