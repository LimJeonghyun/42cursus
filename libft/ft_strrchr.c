/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:36:37 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 14:41:57 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strrchr(const char *str, int c)
{
    const char *last;
    while (*str!='\0')
    {
        if (*str == c)
            last = str;
        str++;
    }
    return (char *)last;
}

#include <string.h>
#include <stdio.h>
int main()
{
    char dst[] = "abcdefgabcd";
    char *s1 = strrchr(dst, 'b');
    char *s2 = ft_strrchr(dst, 'b');
    printf("%s %s", s1, s2);
}