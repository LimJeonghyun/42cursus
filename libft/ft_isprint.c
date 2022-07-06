/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:55:02 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 15:58:19 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}

#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("%d\n", isprint('a'));
	printf("%d\n", isprint('!'));
	printf("%d\n", isprint('1'));
	printf("%d\n", isprint(0));
	printf("%d\n", isprint(49));
	printf("%d\n", isprint(128));
	printf("%d\n", isprint(127)); //del
	printf("%d\n", isprint(32)); //공백
	return (0);
}
