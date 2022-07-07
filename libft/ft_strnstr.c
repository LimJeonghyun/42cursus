/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:47:14 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 17:13:17 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx;
	size_t	tmp;

	idx = 0;
	while (haystack[idx] && idx < len)
	{
		tmp = 0;
		if (needle[tmp] == haystack[idx + tmp])
		{
			while (needle[tmp] && haystack[idx + tmp])
			{
				if (needle[tmp] != haystack[idx + tmp] || (idx + tmp) >= len)
					break ;
				tmp++;
			}
			if (needle[tmp] == '\0')
				return (&((char *)haystack)[idx]);
		}
		idx++;
	}
	return ((void *)0);
}
