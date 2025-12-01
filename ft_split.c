/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:30:07 by geymat            #+#    #+#             */
/*   Updated: 2023/11/17 15:31:48 by geymat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	len_word(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[0] == c && c != 0)
		s++;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	*free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
	return (NULL);
}

static char	**split_alloc(const char *s, char c)
{
	size_t	nb_word;

	if (!s)
		return (NULL);
	nb_word = 0;
	while (*s)
	{
		while (c && *s == c)
			s++;
		if (!*s)
			break ;
		s += len_word(s, c);
		nb_word++;
	}
	return (ft_calloc(nb_word + 1, sizeof(char *)));
}

char	**ft_split(char const *s, char c)
{
	size_t		count;
	size_t		i;
	char		**res;

	res = split_alloc(s, c);
	if (!res)
		return (NULL);
	i = 0;
	count = len_word(s, c);
	while (count)
	{
		res[i] = malloc(count + 1);
		if (!res[i])
			return (free_split(res));
		while (*s == c)
			s++;
		ft_strlcpy(res[i++], s, count + 1);
		s += count;
		count = len_word(s, c);
	}
	return (res);
}
