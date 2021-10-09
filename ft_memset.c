/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:11:13 by stycho            #+#    #+#             */
/*   Updated: 2021/10/09 19:05:03 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*char_b;

	if (b)
	{
		char_b = (char *)b;
		i = 0;
		while (len--)
		{
		   	char_b[i] = (unsigned char)c;
			i++;
		}
	}
	return (b);
}
