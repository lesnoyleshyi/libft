/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:17:50 by stycho            #+#    #+#             */
/*   Updated: 2021/10/13 22:14:08 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_recursive_putnbr(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (n)
	{
		if (n == -2147483648)
			write(fd, "2147483648\0", sizeof(int) * 11);
		if (n < 0)
		{
			write(fd, "-", sizeof(char));
			n *= -1;
		}
		ft_recursive_putnbr(n, fd);
	}
}

static void	ft_recursive_putnbr(int n, int fd)
{
	unsigned char	buf;

	if (n / 10 != 0)
	{
		ft_recursive_putnbr(n / 10, fd);
		buf = (n % 10) + '0';
		write(fd, &buf, sizeof(char));
		n /= 10;
	}
	else
	{
		buf = n + '0';
		write(fd, &buf, sizeof(char));
	}
}
