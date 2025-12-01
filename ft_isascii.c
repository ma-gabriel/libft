/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:16:14 by geymat            #+#    #+#             */
/*   Updated: 2023/11/16 19:23:54 by geymat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief reimplementation of the function isascii.
 * Its behavior is described in the man page
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
