/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 02:03:25 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 16:14:33 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * Applies the function ’f’ to each character of the
 * string passed as argument, passing its index as
 * the first argument. Each character is passed by
 * address to ’f’ so it can be modified if necessary.
 * @param s: The string to iterate over.
 * @param f: The function to apply to each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
