#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	if (*s != '\0')
	{
		write(fd, s, len);
	}
	write(fd, "\n", 1);
}
