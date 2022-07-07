#include "libft.h"

static int	get_nbrlen(int n)
{
	int		len;
	long	nbr;

	nbr = (long)n;
	len = 0;
	if (nbr == 0)
		return (1);
	else if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*new_mem;
	long	nbr;

	new_mem = NULL;
	len = get_nbrlen(n);
	if (!(new_mem = malloc(sizeof(char) * len + 1)))
		return (NULL);
	nbr = (long)n;
	if (nbr == 0)
		new_mem[0] = '0';
	else if (nbr < 0)
	{
		nbr = -nbr;
		new_mem[0] = '-';
	}
	new_mem[len] = '\0';
	while (nbr)
	{
		new_mem[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (new_mem);
}