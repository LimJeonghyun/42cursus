/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:55:24 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 16:55:50 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// void    *ft_calloc(size_t count, size_t size)
// {
//     void *ptr;

//     ptr = malloc(size * count);
//     if (!ptr)
//         return (0);
//     ft_bzero(ptr, (size * count));
//     // ft_bzero는 안쓰는 함수라고 해서 ft_memset사용
//     return (ptr);
// }
#include "libft.h"

void		*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (!(mem = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(mem, (nmemb * size));
	return (mem);
}

#include <stdlib.h>
#include <unistd.h>
int		main(int argc, const char *argv[])
{
	char	*str;

	alarm(5);
	if (argc == 1)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		str = (char *)ft_calloc(30, sizeof(char));
		if (!str)
			write(1, "NULL", 4);
		else
			write(1, str, 30);
		free(str);
	}
	return (0);
}
