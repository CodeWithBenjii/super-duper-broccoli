#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*box;
	int		len;
	int		i;

	len = ft_strlen(s1) + 1;
	box = (char *)malloc(sizeof(char) * len);
	if (!box)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		box[i] = s1[i];
		i += 1;
	}
	box[i] = '\0';
	return (box);
}
