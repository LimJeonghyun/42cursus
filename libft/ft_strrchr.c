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

	while (*str)
	{
		if (*str == c)
			last = str;
		str++;
	}
	return ((char *)last);
}