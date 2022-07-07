#include "libft.h"
void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	int	i;

	str = ft_itoa(n);
	i = 0;
	while (str[i])
	{
		ft_putchar_fd(&str[i], i);
		i++;
	}
}
