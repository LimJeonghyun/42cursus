/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:58:34 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 16:08:36 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
size_t ft_strlen(const char*s)
{
    size_t count;

    count = 0;
    while (s[count])
        count++;
    return (count);
}

#include <stdio.h>
int main()
{
    size_t len = strlen("helloworld!");
    size_t len2  = ft_strlen("helloworld!");
    ("%d %d", len, len2);
}