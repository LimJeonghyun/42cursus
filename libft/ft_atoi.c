/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:43:02 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 15:14:50 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int num;
    int sign;

    sign = 1;
    num = 0;
    while (*str!='\0' && *str==' ')
        str++;
    if(*str == '-')
    {
        sign *= (-1);
        str++;
    }
    else if(*str == '+')
    {
        sign *= (1);
        str++;
    }
    while (*str!='\0' && (*str >= '0' && *str <= '9'))
    {
        num = num * 10 + (*str - '0');
        str++;
    }
    return (num * sign);
}

#include<stdlib.h>
#include<stdio.h>
int main()
{
    char s[] = "-2147483649";
    printf("%d\n", atoi(s));
    printf("%d", ft_atoi(s));
}

