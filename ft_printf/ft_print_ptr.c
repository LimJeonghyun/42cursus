/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:40:22 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/14 16:02:41 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(unsigned long long n)
{
	int	len;

	len = 0;
	while (n)
	{
		len++;
		n /= 16;
	}
	return (len);
}

void	ft_put_ptr(unsigned long long n)
{
	if (n >= 16)
	{
		ft_put_ptr(n / 16);
		ft_put_ptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_print_char(n + '0');
		else
			ft_print_char(n - 10 + 'a');
	}
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	n;

	n = (unsigned long long)ptr;
	write(1, "0x", 2);
	if (n == 0)
		return (write(1, "0", 1) + 2);
	else
		ft_put_ptr(n);
	return (2 + ft_ptr_len(n));
}
