/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:36:49 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 13:36:50 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) 
        return (1);
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

#include <ctype.h>
#include <stdio.h>
int main()
{
    printf("%d\n", isalnum('a'));
	printf("%d\n", isalnum('!'));
	printf("%d\n", isalnum('1'));
	printf("%d\n", isalnum(1));
	printf("%d\n", isalnum(49));
	return (0);
}
