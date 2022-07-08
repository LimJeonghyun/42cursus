/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:41:33 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/08 14:30:32 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nbrlen(int n)
{
	int		len;
	long	nbr;

	nbr = (long)n;
	len = 0;
	if (nbr == 0)
		return (1);
	else if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*new_num;
	long	nbr;

	new_num = NULL;
	len = get_nbrlen(n);
	new_num = malloc(sizeof(char) * (len + 1));
	if (!new_num)
		return (NULL);
	nbr = (long)n;
	if (nbr == 0)
		new_num[0] = '0';
	else if (nbr < 0)
	{
		nbr = -nbr;
		new_num[0] = '-';
	}
	new_num[len] = '\0';
	while (nbr)
	{
		new_num[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (new_num);
}
