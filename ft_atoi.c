/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:39:01 by stycho            #+#    #+#             */
/*   Updated: 2021/10/05 22:39:03 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	minus_status;
	int	i;
	int	res;

	i = 0;
	res = 0;
	minus_status = 1;
	if (str[0] == '-')
	{
		minus_status = -1;
		i++;
	}
	if (str[0] == '+')
		i++;
	while (str[i] > 47 && str[i] < 58)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (minus_status * res);
}
