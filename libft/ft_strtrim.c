/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:15:41 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/08 14:17:36 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*ptr;

	if (!s1)
		return (NULL);
	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1);
	while (*start)
	{
		if (!ft_strchr(set, *start))
			break ;
		start++;
	}
	while (start != NULL && start < end)
	{
		if (!ft_strchr(set, *end))
			break ;
		end--;
	}
	ptr = (char *)malloc(end - start + 2);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, start, end - start + 2);
	return (ptr);
}
