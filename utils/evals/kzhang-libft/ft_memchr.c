#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*box;

	box = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (box[i] == (unsigned char)c)
		{
			return (&box[i]);
		}
		i++;
	}
	return (0);
}
