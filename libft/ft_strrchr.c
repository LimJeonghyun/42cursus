/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:36:37 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 14:41:57 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;
	size_t len;
	len=ft_strlen(str);
	last = 0;
	if (len == 0)
		return ((char *)str);
	while (*str)
	{
		if (*str == c)
			last = str;
		str++;
	}
	return ((char *)last);
}

#include <stdio.h>
#include <string.h>

int				main()
{
	char		str2[] = "bonjour";
	char	str3[]= "bonjourno";
	char	str4[] = "";
	printf("%s : %s\n",ft_strrchr(str2, 'b'), strrchr(str2, 'b'));
	printf("%s : %s\n",ft_strrchr(str2, 'o'), strrchr(str2, 'o'));
	printf("%s : %s\n",ft_strrchr(str3, 'o'), strrchr(str3, 'o'));
	printf("%s : %s\n",ft_strrchr(str2, 'j'), strrchr(str2, 'j'));
	printf("%s : %s\n",ft_strrchr(str4, '\0'), strrchr(str4, '\0'));
	printf("%s : %s\n",ft_strrchr(str2 + 2, 'b'), strrchr(str2 + 2, 'b'));

}
