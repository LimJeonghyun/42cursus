/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:46:11 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/15 17:24:44 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_numlen(unsigned int n)
{
	int		len;
	long	num;

	len = 0;
	if (num == 0)
		return (1);
	else if (num < 0)
		num = -num;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	int		len;
	char	*result;
	long	num;

	result = NULL;
	len = get_numlen(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (num == 0)
		result[0] = '0';
	else if (num < 0)
		num = -num;
	result[len] = '\0';
	while (num)
	{
		result[--len] = num % 10 + '0';
		num = num / 10;
	}
	return (result);
}

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_uitoa(n);
	len = ft_print_str(num);
	free(num);
	return (len);
}
