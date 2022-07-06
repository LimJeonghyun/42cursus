/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:36:57 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 13:36:58 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_isascii(int c)
{
    if (c >= 0 && c <= 127) return (1);
    return (0);
}

#include <ctype.h>
#include <stdio.h>
int main()
{
    printf("%d\n", isascii('a'));
	printf("%d\n", isascii('!'));
	printf("%d\n", isascii('1'));
	printf("%d\n", isascii(0));
	printf("%d\n", isascii(49));
	printf("%d\n", isascii(128));
	return (0);
}
