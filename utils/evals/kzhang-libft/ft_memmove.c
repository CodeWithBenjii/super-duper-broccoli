#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*box;
	unsigned char	*temp;
	size_t			i;

	box = (unsigned char *)dst;
	temp = (unsigned char *)src;
	if (!box && !temp)
		return (NULL);
	i = 0;
	if (box > temp)
	{
		while (n > 0)
		{
			box[n - 1 ] = temp[n - 1];
			n--;
		}
		return (dst);
	}
	while (i < n)
	{
		*(box + i) = *(temp + i);
		i++;
	}
	return (dst);
}
