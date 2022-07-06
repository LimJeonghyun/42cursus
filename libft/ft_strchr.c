/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:23:13 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 14:23:15 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *str, int c)
{
    while (*str!='\0')
    {
        if (*str == (char)c)
            return((char *)str);
        str++;
    }
    return (0);
}

#include <string.h>
#include <stdio.h>

int main()
{
    char str[] = "BlockDMask";
    char *ptr = strchr(str, ' ');
    if(ptr!=NULL)
        printf("%c, %s\n", *ptr, ptr);
    char str1[] = "BlockDMask";
    char *ptr1 = ft_strchr(str1, ' ');
    if(ptr!=NULL)
        printf("%c, %s\n", *ptr1, ptr1);
}