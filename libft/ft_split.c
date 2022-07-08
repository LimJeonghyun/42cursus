/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:00:12 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/08 14:21:27 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**free_malloc(char **ret)
{
	int	i;

	i = 0;
	while (ret[i])
	{
		free(ret[i]);
		i++;
	}
	free(ret);
	return (NULL);
}

static void	ft_strcpy(char *dst, char *src, char *to)
{
	while (src < to)
		*(dst++) = *(src++);
	*dst = 0;
}

int	ft_cnt(const char *s, char c)
{
	int	cnt;
	int	flag;

	flag = 0;
	cnt = 0;
	while (*s)
	{
		if (*s != c && !flag)
		{
			flag = 1;
			cnt++;
		}
		if (*s == c && flag == 1)
			flag = 0;
		s++;
	}
	return (cnt);
}

char	**ft_split(const char *s, char c)
{
	char	**ptr;
	char	*from;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	len = ft_cnt(s, c);
	ptr = (char **)malloc(sizeof(char *) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*s && *s == c)
			s++;
		from = (char *)s;
		while (*s && *s != c)
			s++;
		ptr[i] = (char *)malloc(sizeof(char) * (s - from + 2));
		if (!ptr)
			return (free_malloc(ptr));
		ft_strcpy(ptr[i++], from, (char *)s);
	}
	ptr[i] = NULL;
	return (ptr);
}
