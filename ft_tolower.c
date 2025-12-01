/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:17:31 by geymat            #+#    #+#             */
/*   Updated: 2023/11/07 04:17:55 by geymat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief reimplementation of the function tolower.
 * Its behavior is described in the man page
 */
int	ft_tolower(int c)
{
	return (c + 32 * (c >= 'A' && c <= 'Z'));
}
