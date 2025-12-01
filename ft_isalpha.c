/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:31:16 by geymat            #+#    #+#             */
/*   Updated: 2023/11/16 19:23:33 by geymat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief reimplementation of the function isalpha.
 * Its behavior is described in the man page
 */
int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
