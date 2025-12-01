/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:04:27 by geymat            #+#    #+#             */
/*   Updated: 2023/11/07 04:20:45 by geymat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief reimplementation of the function isalnum.
 * Its behavior is described in the man page
 */
int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}
