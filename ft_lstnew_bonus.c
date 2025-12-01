/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:44:27 by geymat            #+#    #+#             */
/*   Updated: 2023/11/10 06:37:25 by geymat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * Allocates memory (using malloc(3)) and returns
 * a new node. The ’content’ member variable is
 * initialized with the given parameter ’content’.
 * The variable ’next’ is initialized to NULL.
 * @param content: The content to store in the new node.
 * @returns A pointer to the new node
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*res;

	res = malloc(sizeof(t_list));
	if (!res)
		return (NULL);
	res->content = content;
	res->next = NULL;
	return (res);
}
