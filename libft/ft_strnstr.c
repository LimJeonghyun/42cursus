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

#include <stdio.h>
#include <string.h>

int main (void)
{
	char	str1[10] = "book";
	char	str2[5] = "oo";
	char	str3[5] = "o";
	char	str4[5] = "go";
	char	str5[5] = "og";
  	char	str6[5] = "ob";
  	char	str7[5] = "ookg";
	printf("book - oo : %p\n", ft_strnstr(str1, str2, 4));
	printf("book - o : %p\n", ft_strnstr(str1, str3, 4));
	printf("book - go : %p\n", ft_strnstr(str1, str4, 4));
	printf("book - og : %p\n", ft_strnstr(str1, str5, 4));
  	printf("book - ob : %p\n", ft_strnstr(str1, str6, 4));
  	printf("book - ookg : %p\n", ft_strnstr(str1, str7, 4));
  	printf("book - oo - 0byte : %p\n", ft_strnstr(str1, str2, 0));
	return (0);
}