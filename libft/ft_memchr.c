/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:13:11 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 16:33:29 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *ptr, int value, size_t n)
{
    size_t i;

    i = 0;
    while (i<n)
    {
        if (((unsigned char *)ptr)[i] == (unsigned char)value)
            return((void *)ptr + i);
        i++;
    }
    return ((void *)0);
}

#include <stdio.h>
#include <string.h>

int main() {
  char* pch;
  char str[] = "Example string";
  pch = (char*)memchr(str, 'p', strlen(str));

  if (pch != NULL)
    printf("'p' found at position %ld.\n", pch - str + 1);
  else
    printf("'p' not found.\n");

  char* pch1;
  char str1[] = "Example string";
  pch1 = (char*)ft_memchr(str1, 'p', strlen(str1));

  if (pch1 != NULL)
    printf("'p' found at position %ld.\n", pch1 - str1 + 1);
  else
    printf("'p' not found.\n");

  return 0;
}