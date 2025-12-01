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

char	*ft_strrchr(char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	while (len != (size_t) -1)
	{
		if (str[len] == (char) c)
			return (str + len);
		len--;
	}
	return (0);
}
