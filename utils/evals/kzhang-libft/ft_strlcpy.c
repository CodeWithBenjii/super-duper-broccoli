#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	j = ft_strlen(src);
	if (dstsize == 0)
		return (j);
	while ((i < (dstsize - 1)) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
