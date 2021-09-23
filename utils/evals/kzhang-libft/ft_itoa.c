#include "libft.h"

static int	ft_countnbr(int nb)
{
	int	count;

	count = 1;
	if (nb < 0)
		count++;
	while (nb > 9 || nb < -9)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*rtn;
	int				len;
	unsigned int	num;

	len = ft_countnbr(n);
	rtn = (char *)malloc(len + 1 * sizeof(char));
	if (rtn == NULL)
		return (NULL);
	if (n < 0)
	{
		rtn[0] = '-';
		num = -n;
	}
	else
		num = n;
	rtn[len] = '\0';
	while (len > 0 && rtn[len - 1] != '-')
	{
		rtn[len - 1] = num % 10 + '0';
		num = num / 10;
		len--;
	}
	return (rtn);
}
