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

	start = 0;
	while (ft_strchr((char *) set, s[start]))
	{
		if (!s[start])
			return (ft_strdup(""));
		start++;
	}
	s += ft_strlen(s) + 1;
	while (ft_strchr((char *) set, *(s - 1)))
		s--;
	return (ft_substr(save, start, s - save - start));
}
