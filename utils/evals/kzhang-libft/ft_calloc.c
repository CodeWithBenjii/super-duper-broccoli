#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*box;

	box = (unsigned char *)malloc(sizeof(size) * count);
	if (!box)
		return (NULL);
	ft_memset(box, 0, count);
	return ((void *)box);
}
