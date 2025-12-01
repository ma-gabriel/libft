/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:06:07 by geymat            #+#    #+#             */
/*   Updated: 2023/11/17 16:00:26 by geymat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	const char	*save = s;
	size_t		start;
	char		*res;

	while (ft_strchr((char *) set, *s))
	{
		if (!*s)
			return (ft_strdup(""));
		s++;
	}
	start = s - save;
	s += ft_strlen(s) + 1;
	while (ft_strchr((char *) set, *(s - 1)))
		s--;
	res = malloc(ft_strlen(save) - start - ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, save + start, ft_strlen(save) - start - ft_strlen(s) + 1);
	return (res);
}
