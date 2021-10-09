/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 21:24:18 by stycho            #+#    #+#             */
/*   Updated: 2021/10/05 21:38:22 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		delta;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		delta = s1[i] - s2[i];
		if (delta != 0)
			return (delta);
		i++;
	}
	return (0);
}
