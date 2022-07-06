/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:37:06 by jeolim            #+#    #+#             */
/*   Updated: 2022/07/06 13:37:07 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// size_t랑 null값 사용
void *ft_memset(void* ptr, int value, size_t len)
{
    //ptr: 세팅하려는 메모리의 시작 주소
    //value: 메모리에 세팅하고자 하는 값
    //len: 길이
    //return: 성공) ptr반환, 실패) 0
    //for문보다 초기화 할 때 효율적
    size_t idx;
    unsigned char *tmp;
    tmp = (unsigned char *)ptr;
    idx = 0;
    while (idx < len)
        tmp[idx++] = (unsigned char)value;
    return (tmp);
}

#include <stdio.h>
int main(void)
{
    int memset_with_0[5];
    int memset_with_1[5];
    
    ft_memset(memset_with_0, 0, sizeof(memset_with_0));
    ft_memset(memset_with_1, 1, sizeof(memset_with_1));
		 
		//memset_with_0 출력
		printf("memset_with_0 : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", *(memset_with_0 + i));

		//memset_with_1 출력
		printf("\nmemset_with_1 : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", *(memset_with_1 + i));
    
    return 0;
}

// #include <stdio.h>
// #include "libft.h"
// int main()
// {
//     char arr[] = "blockdmask";
//     char arr1[] = "blockdmask";
//     memset(arr, 'c', 5*sizeof(char));
//     printf("%s\n", arr);
//     ft_memset(arr1, 'c', 5*sizeof(char));
//     printf("%s", arr1);
// }
