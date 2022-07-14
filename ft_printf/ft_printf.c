/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:04:30 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/14 16:01:35 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char arg, va_list v)
{
	int	len;

	len = 0;
	if (arg == 'c')
		len = ft_print_char(va_arg(v, int));
	else if (arg == 's')
		len = ft_print_str(va_arg(v, char *));
	else if (arg == 'p')
		len = ft_print_ptr(va_arg(v, void *));
	else if (arg == 'u')
		len = ft_print_unsigned (va_arg(v, unsigned long));
	else if (arg == 'd' || arg == 'i')
		len = ft_print_nbr(va_arg(v, int));
	else if (arg == 'x' || arg == 'X')
		len = ft_print_hex(va_arg(v, unsigned int), arg);
	else if (arg == '%')
		len = write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *args, ...)
{
	int		i;
	va_list	v;
	int		len;

	va_start(v, args);
	i = 0;
	len = 0;
	while (args[i])
	{
		if (args[i] == '%')
		{
			len += ft_format(args[i + 1], v);
			i++;
		}
		else
			len += write(1, &args[i], 1);
		i++;
	}
	va_end(v);
	return (len);
}
