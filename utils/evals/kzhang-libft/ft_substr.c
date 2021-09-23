#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*box;

	box = (char *)malloc(sizeof(char) * (len + 1));
	if (!box)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if ((i >= start) && (j < len))
		{
			box[j] = s[i];
			j++;
		}
		i++;
	}
	box[j] = 0;
	return (box);
}
