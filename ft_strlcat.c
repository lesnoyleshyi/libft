#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		len;

	d = dst;
	s = src;
	while (*d != '\0')
		d++;
	len = d - dst;
	dstsize = dstsize - len - 1;
	if (dstsize > 0)
	{
		while (dstsize--)
		{
			*d++ = *s++;
			if (*s == '\0')
				break;
		}
		while(*s)
			s++;
	}
	return ((s - src) + len);
}
