/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:36:15 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 14:52:13 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 연속된 범위를 0으로 모두 지정
#include "libft.h"
// static void *ft_memset(void *ptr, int value, size_t len)
// {
//     size_t          idx;
//     unsigned char   *tmp;

//     tmp = (unsigned char *)ptr;
//     idx = 0;
//     while   (idx < len)
//         tmp[idx++] = (unsigned char)value;
//     return (tmp);
// }

void    ft_bzero(void *ptr, size_t len)
{
    ft_memset (ptr, 0, len);
}