#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*box;
	const char	*temp;

	if (dst == NULL)
	{
		return (NULL);
	}
	box = dst;
	temp = src;
	while (n--)
	{
		*box++ = *temp++;
	}
	return (dst);
}
