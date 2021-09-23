#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*box;
	int				i;

	box = b;
	i = 0;
	while (i < (int)len)
	{
		box[i] = ((unsigned char)c);
		i++;
	}
	return (b);
}
