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
#include <string.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx;
	size_t	tmp;

	idx = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
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

int				main()
{
	
	printf("%s : %s\n",ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15), strnstr("lorem ipsum dolor sit amet", "lorem", 15));
	printf("%s : %s\n", ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35), strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35));
	printf("*%s : %s\n", ft_strnstr("lorem ipsum dolor sit amet", "", 10), strnstr("lorem ipsum dolor sit amet", "", 10));
	printf("%s : %s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30), strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	printf("%s : %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dol", 30), strnstr("lorem ipsum dolor sit amet", "dol", 30));
	printf("%s : %s\n", ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30), strnstr("lorem ipsum dolor sit amet", "consectetur", 30));
	printf("%s : %s\n", ft_strnstr("lorem ipsum dolor sit amet", "sit", 10), strnstr("lorem ipsum dolor sit amet", "sit", 10));
	printf("%s : %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15), strnstr("lorem ipsum dolor sit amet", "dolor", 15));	
	printf("%s : %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0), strnstr("lorem ipsum dolor sit amet", "dolor", 0));	
		
	return (0);
}
