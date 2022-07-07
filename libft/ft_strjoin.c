#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int	idx;

	new_s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new_s)
		return (0);
	idx = 0;
	while (*s1)
	{
		new_s[idx] = *s1;
		idx++;
		s1++;
	}
	while (*s2)
	{
		new_s[idx] = *s2;
		idx++;
		s2++;
	}
	new_s[idx]= '\0';
	return (new_s);
}
