/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:13:11 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 16:33:29 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *ptr, int value, size_t n)
{
	size_t	i;

	i = 0;
	while (i<n)
	{
		if (((unsigned char *)ptr)[i] == (unsigned char)value)
			return((void *)ptr + i);
		i++;
    }
    return ((void *)0);
}
