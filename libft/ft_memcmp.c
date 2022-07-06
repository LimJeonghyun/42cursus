/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:33:44 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 17:08:13 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = 0;
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (i < n)
	{
		if (tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp2[i]);
		i++;
	}
	return (0);
}
/**
#include <stdio.h>
int main( void)
{
   char   *ptr1 = "jwmx";
   char   *ptr2 = "jwmx";
   char   *ptr3 = "jwmx.badayak";
   char   *ptr4 = "badayak";
   char   *ptr5 = "com";

   printf( "%s with %s = %d\n", ptr1, ptr2, memcmp( ptr1, ptr2, strlen(ptr1)));
   printf( "%s with %s (ptr1 size)= %d\n", ptr1, ptr3, memcmp( ptr1, ptr3, strlen(ptr1)));
   printf( "%s with %s (ptr3 size)= %d\n", ptr1, ptr3, memcmp( ptr1, ptr3, strlen(ptr3)));
   printf( "%s with %s = %d\n", ptr1, ptr4, memcmp( ptr1, ptr4, strlen(ptr1)));
   printf( "%s with %s (ptr1 size)= %d\n", ptr1, ptr5, memcmp( ptr1, ptr5, strlen(ptr1)));
   printf( "%s with %s (ptr5 size)= %d\n", ptr1, ptr5, memcmp( ptr1, ptr5, strlen(ptr5)));

    printf("-------\n");
    printf( "%s with %s = %d\n", ptr1, ptr2, ft_memcmp( ptr1, ptr2, strlen(ptr1)));
   printf( "%s with %s (ptr1 size)= %d\n", ptr1, ptr3, ft_memcmp( ptr1, ptr3, strlen(ptr1)));
   printf( "%s with %s (ptr3 size)= %d\n", ptr1, ptr3, ft_memcmp( ptr1, ptr3, strlen(ptr3)));
   printf( "%s with %s = %d\n", ptr1, ptr4, ft_memcmp( ptr1, ptr4, strlen(ptr1)));
   printf( "%s with %s (ptr1 size)= %d\n", ptr1, ptr5, ft_memcmp( ptr1, ptr5, strlen(ptr1)));
   printf( "%s with %s (ptr5 size)= %d\n", ptr1, ptr5, ft_memcmp( ptr1, ptr5, strlen(ptr5)));

   return 0;
}
**/
