#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = 0;
	while (*dst && size > 0)
	{
		dst++;
		dlen++;
		size--;
	}
	while (*src && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	if (*src == 0 || size == 1)
		*dst = '\0';
	return (slen + dlen);
}
