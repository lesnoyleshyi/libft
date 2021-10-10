/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:39:01 by stycho            #+#    #+#             */
/*   Updated: 2021/10/10 22:45:16 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int			minus_status;
	long long	res;

	res = 0;
	minus_status = 1;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus_status = -1;
		str++;
	}
	while (*str > 47 && *str < 58)
		res = (res * 10 + (*str++ - '0'));
	res *= minus_status;
	printf("res: %lld\n", res);
	if (res > 9223372063854775807)
		return (-1);
	if (res < -2147483648)
		return (0);
	return ((int)res);
}
