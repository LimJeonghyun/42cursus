/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:40:09 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 15:47:31 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t count;
    int i;

    count = 0;
    i = 0;
    while (src[count])
        count++;
    if(dstsize!=0)
    {
        while ((src[i] != '\0') && (i < dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }   
    return (count);
}

#include <string.h>
#include <stdio.h>
int main()
{
    
}