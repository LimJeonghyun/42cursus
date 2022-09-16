/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:47:20 by jeolim            #+#    #+#             */
/*   Updated: 2022/09/16 20:34:08 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (!count && (count >= SIZE_MAX || size >= SIZE_MAX))
		return (NULL);
	if (size >= SIZE_MAX / count)
		return (NULL);
	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	return (ft_memset(ptr, 0, (size * count)));
}

void	*ft_memset(void *ptr, int value, size_t len)
{
	size_t	idx;
	char	*tmp;

	tmp = (char *)ptr;
	idx = 0;
	while (idx < len)
		tmp[idx++] = (unsigned char)value;
	return (ptr);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		sizetotal;
	char	*res;
	int		i;
	int		j;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	sizetotal = ft_strlen(s1) + ft_strlen(s2);
	res = ft_calloc(sizeof(char) * (sizetotal + 1));
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	return (res);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((char)c == str[i])
			return ((char *)(str + i));
		i++;
	}
	if (c == 0)
		return ((char *)(str + i));
	return (0);
}
