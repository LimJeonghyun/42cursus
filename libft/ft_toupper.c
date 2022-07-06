/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:46:49 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 13:46:51 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_toupper(int c)
{
    if (c>=97 && c<=122)
        return (c-32);
    return (c);
}
#include <ctype.h>
#include <xlocale.h>
#include <stdio.h>
int main()
{
    printf("%d %d", toupper('#'), ft_toupper('#'));
}
