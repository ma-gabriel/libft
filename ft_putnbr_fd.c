/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geymat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 04:22:24 by geymat            #+#    #+#             */
/*   Updated: 2025/12/01 15:47:17 by geymat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static char	*ft_itoa_buffered(int n, char *buffer);

/**
 * Outputs the integer ’n’ to the specified file
 * descriptor.
 * @param n: The integer to output.
 * @param fd: The file descriptor on which to write.
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	str[sizeof(int) * 10 / 4 + 2];

	ft_itoa_buffered(n, str);
	ft_putstr_fd((char *) str, fd);
}

static char	*ft_itoa_buffered(int n, char *buffer)
{
	const long	n_abs = ((n > 0) * 2 - 1) * (long) n;
	long int	fact;
	long int	i;

	fact = 1;
	i = n < 1;
	while (fact <= n_abs)
	{
		fact *= 10;
		i++;
	}
	buffer[i] = 0;
	fact = 1;
	while (n / fact)
	{
		buffer[--i] = '0' + n_abs / fact % 10;
		fact *= 10;
	}
	if (n <= 0)
		buffer[0] = '-' + (n == 0) * ('0' - '-');
	return (buffer);
}
