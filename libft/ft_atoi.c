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

#include "libft.h"
int	ft_atoi(const char *str)
{
	unsigned int	num;
	int		sign;

	sign = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || *str==' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if(*str == '-')
			sign *= (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
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
   printf("%d\n", atoi("\f\n\t\r\v 224\t\t"));
    printf("%d\n", atoi("9223372036854775808"));
    printf("%d\n", atoi("9223372036854775808"));
    printf("========\n");
    printf("%d\n", ft_atoi("\f\n\t\r\v 224\t\t"));
    printf("%d\n", ft_atoi("9223372036854775808"));
    printf("%d\n", ft_atoi("9223372036854775808"));
    // 오버 플로우면 -1 언더플로우면 0을 리턴하는데 libft에서는 노 상관
}

