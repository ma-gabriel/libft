/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:02:16 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 15:12:11 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * Iterates through the list ’lst’, applies the
 * function ’f’ to each node’s content, and creates
 * a new list resulting of the successive applications
 * of the function ’f’. The ’del’ function is used to
 * delete the content of a node if needed.
 * @param lst: The address of a pointer to a node.
 * @param f: The address of the function applied to each
 * node’s content.
 * @param del: The address of the function used to delete a
 * node’s content if needed.
 * @returns The new list.
 * NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*next;
	void	*content;

	res = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		next = ft_lstnew(content);
		if (!next || !content)
		{
			ft_lstclear(&res, del);
			if (content)
				del(content);
			if (next)
				free(next);
			return (NULL);
		}
		ft_lstadd_back(&res, next);
		lst = lst->next;
	}
	return (res);
}
