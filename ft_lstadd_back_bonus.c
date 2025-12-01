/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 08:10:02 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 14:38:26 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Adds the node ’new’ at the end of the list.
 * @param lst: The address of a pointer to the first node of a list.
 * @param new: The address of a pointer to the node to be added.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	while ((*lst)->next)
		lst = &((*lst)->next);
	(*lst)->next = new;
}
