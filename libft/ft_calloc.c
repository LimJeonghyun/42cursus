/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:55:24 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 16:55:50 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = malloc(size * count);
    if (!ptr)
        return (0);
    ft_memset(ptr, 0, size * count);
    // ft_bzero는 안쓰는 함수라고 해서 ft_memset사용
    return (ptr);
}