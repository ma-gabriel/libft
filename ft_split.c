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

static size_t	len_word(char const *s, char c);
static char	**split_alloc(const char *s, char c);
static void	*free_split(char **split);

/**
 * Allocates memory (using malloc(3)) and returns an
 * array of strings obtained by splitting ’s’ using
 * the character ’c’ as a delimiter. The array must
 * end with a NULL pointer.
 * @param s: The string to be split.
 * @param c: The delimiter character.
 * @returns The array of new strings resulting from the split.
 * NULL if the allocation fails.
 */
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
		while (*s == c)
			s++;
		res[i] = ft_substr(s, 0, count);
		if (!res[i])
			return (free_split(res));
		s += count;
		count = len_word(s, c);
		i++;
	}
	return (res);
}

static size_t	len_word(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s == c)
		s++;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**split_alloc(const char *s, char c)
{
	size_t	nb_word;

	nb_word = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		s += len_word(s, c);
		nb_word++;
	}
	return (ft_calloc(nb_word + 1, sizeof(char *)));
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
