/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:25:10 by stycho            #+#    #+#             */
/*   Updated: 2021/10/07 13:15:43 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	size_t		i;
	const char	*s = src;

	d = dst;
	i = dstsize;
	s = src;
	if (dstsize != 0)
	{
		while (--i)
		{
			*d++ = *s++;
			if (*s == '\0')
				break ;
		}
	}
	if (i == 0)
	{
		if (dstsize != 0)
			*d = '\0';
		while (*s)
			s++;
	}
	return (s - src);
}
