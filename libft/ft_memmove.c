/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:29:04 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 15:39:02 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *tmp;
    const char *s;

    if (dst <= src)
    {
        tmp = dst;
        s = src;
        while (len--)
            *tmp++ = *s++;
    }
    else
    {
        tmp = dst;
        tmp += len;
        s = src;
        s += len;
        while (len--)
            *--tmp = *--s;
    }
    return dst;
}

#include <string.h>
#include <stdio.h>

int main()
{
    char str[] = "BlockDMask";
    char dest[] = "fffffdddddzzzzz";
    memmove(dest, str, sizeof(char)*10);
    char str1[] = "BlockDMask";
    char dest1[] = "fffffdddddzzzzz";
    ft_memmove(dest1, str1, sizeof(char)*10);
    printf("%s %s\n", dest,dest1);

    char array[10] = "test";
    memmove(array+2, array, strlen("test"));
    printf("after memmove : %s\n", array);
    char array1[10] = "test";
    ft_memmove(array1+2, array1, strlen("test"));
    printf("after memmove : %s\n", array1);

    char array2[10] = "test";
    memmove(array2, array2+2, strlen("test"));
    printf("after memmove : %s\n", array2);
    char array3[10] = "test";
    ft_memmove(array3, array3+2, strlen("test"));
    printf("after memmove : %s\n", array3);
}