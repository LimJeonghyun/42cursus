/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:40:03 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 15:28:34 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *tmp = dst;
    const char *s = src;

    while (n--)
    {
        *tmp++ = *s++;
    }
    return (dst);
}

#include <string.h>
#include <stdio.h>

int main()
{
    char ab[20] = "hello";
    char aa[20];
    
    memcpy(aa, ab, 6*sizeof(char));
    printf("%s\n", aa);

    char ab1[20] = "hello";
    char aa1[20];
    
    ft_memcpy(aa1, ab1, 6*sizeof(char));
    printf("%s", aa1);
}