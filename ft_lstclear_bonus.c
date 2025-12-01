/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 08:24:44 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 14:52:46 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Deletes and frees the given node and all its
 * successors, using the function ’del’ and free(3).
 * Finally, set the pointer to the list to NULL.
 * @param lst: The address of a pointer to a node.
 * @param del: The address of the function used to delete
 * the content of the node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!(*lst))
		return ;
	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}
