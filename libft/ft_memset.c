#include <string.h>
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
#include "libft.h"
int main()
{
    char arr[] = "blockdmask";
    char arr1[] = "blockdmask";
    memset(arr, 'c', 5*sizeof(char));
    printf("%s\n", arr);
    ft_memset(arr1, 'c', 5*sizeof(char));
    printf("%s", arr1);
}