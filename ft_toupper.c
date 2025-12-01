/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:14:07 by geymat            #+#    #+#             */
/*   Updated: 2023/11/07 04:17:06 by geymat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief reimplementation of the function toupper.
 * Its behavior is described in the man page
 */
int	ft_toupper(int c)
{
	return (c - 32 * (c >= 'a' && c <= 'z'));
}
