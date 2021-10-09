/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:54:01 by stycho            #+#    #+#             */
/*   Updated: 2021/10/08 15:54:03 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ch_s1;
	const char	*ch_s2;

	ch_s1 = s1;
	ch_s2 = s2;
	while (n--)
	{
		if (*ch_s1 != *ch_s2)
			return (*ch_s1 - *ch_s2);
		ch_s1++;
		ch_s2++;
	}
	return (0);
}
