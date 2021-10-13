/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:11:03 by stycho            #+#    #+#             */
/*   Updated: 2021/10/12 00:21:29 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*l_border;
	char	*r_border;
	char	*res;
	char	*res_start;

	res_start = NULL;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	l_border = (char *)s1;
	while (*s1)
		r_border = (char *)s1++;
	while (ft_strchr(set, *r_border))
	{
		if (r_border == l_border)
			return ("");
		r_border--;
	}
	res = (char *)malloc(((r_border - l_border) + 2) * sizeof(char));
	if (res)
	{
		res_start = res;
		while (l_border < (r_border + 1))
			*res++ = *l_border++;
		*res = '\0';
	}
	return (res_start);
}
