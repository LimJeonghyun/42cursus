/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:04:30 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/13 19:58:09 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

// c : 단일 문자
// s: 문자열
// p : 16진수
// d : 10진수 숫자
// i  : 10진수 정수
// u: 부호 없는 10진수
// x: 소문자 -> 16진수
// X : 대문자 -> 16진수
//  %%퍼센트 기호.
#include <stdio.h>
int ft_printf(const char *arg, ...)
{
    int i;

    i = 0;
    while (arg[i])
    {
        if (arg[i] == '%c')
            // int면 숫자랑 어떻게 구분?
            ft_putchar_fd(va_arg(ap, int));
        else if(arg[i] == '%s')
            ft_putstr_fd(va_arg(ap, char *));
        else if(arg[i] == '%p')
            ft_putstr_fd(va_arg(ap, void *));
        else if(arg[i] == '%d')
            ft_putnbr_fd(va_arg(ap, int));
        else if(arg[i] == '%i')
            ft_putnbr_fd(va_arg(ap, int));
        else if(arg[i] == '%u')
            ft_putnbr_fd(va_arg(ap, int));
        else if(arg[i] == '%x')
            ft_putnbr_fd(va_arg(ap, int));
        else if(arg[i] == '%X')
            ft_putnbr_fd(va_arg(ap, int));
        else if(arg[i] == '%%')
            ft_putnbr_fd(va_arg(ap, '%'));
    }
}   


int main()
{
    printf("%d", ft_printf("%d %c %f %i", 2));
}