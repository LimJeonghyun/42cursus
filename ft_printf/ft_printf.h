/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:10:32 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/14 16:03:41 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

int		ft_printf(const char *args, ...);
int		ft_format(const char arg, va_list v);
int		ft_print_char(int c);
int		ft_print_str(char *s);
int		ft_print_ptr(void *data);
void	ft_put_ptr(unsigned long long n);
int		ft_ptr_len(unsigned long long n);
int		ft_print_unsigned(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		get_numlen(unsigned int n);
int		ft_print_nbr(int n);
int		ft_print_hex(unsigned int n, const char format);
void	ft_put_hex(unsigned int n, const char format);
int		ft_hex_len(unsigned int n);
#endif
