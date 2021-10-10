/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:25:10 by stycho            #+#    #+#             */
/*   Updated: 2021/10/10 15:04:07 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*src_pos;

	if (dstsize > 0)
	{
		src_pos = src;
		while (--dstsize && *src_pos)
		{
			*dst++ = *src_pos++;
		}
		*dst = '\0';
	}
	return (ft_strlen(src));
}
