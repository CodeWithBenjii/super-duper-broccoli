#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*box;
	unsigned char	*temp;

	box = (unsigned char *)s1;
	temp = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (box[i] != temp[i])
		{
			return (box[i] - temp[i]);
		}
		i++;
	}
	return (0);
}
