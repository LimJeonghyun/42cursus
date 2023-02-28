/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:02:28 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/14 13:22:53 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *s)
{
	int	len;

	if (s == NULL)
	{
		write(1, "(null)", ft_strlen("(null)"));
		return (ft_strlen("(null)"));
	}
	len = 0;
	while (s[len])
		len += write(1, &s[len], 1);
	return (len);
}

int	ft_print_nbr(int n)
{
	char	*num;
	int		len;

	num = ft_itoa(n);
	len = ft_print_str(num);
	free(num);
	return (len);
}
