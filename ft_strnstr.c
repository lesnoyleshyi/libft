/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:53:14 by stycho            #+#    #+#             */
/*   Updated: 2021/10/10 20:59:53 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h_pos;
	char	*n_pos;
	char	*f_oc;

	if (*needle == '\0')
		return ((char *)haystack);
	h_pos = (char *)haystack;
	f_oc = NULL;
	while (*h_pos != '\0' && len)
	{
		n_pos = (char *)needle;
		if (*h_pos == *n_pos)
			f_oc = h_pos;
		while (*h_pos == *n_pos)
		{
			if (*(n_pos++ + 1) == '\0')
				return (f_oc);
			h_pos++;
			if (--len == 0)
				return (NULL);
		}
		h_pos++;
		len--;
	}
	return (NULL);
}
