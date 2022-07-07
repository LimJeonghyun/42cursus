
#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int	i;

	str = ft_strup(s);
	if (!str)
		return (0);
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
