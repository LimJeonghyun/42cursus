// 연속된 범위를 0으로 모두 지정
#include <string.h>

static void *ft_memset(void* ptr, int value, size_t len)
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

void ft_bzero(void *ptr, size_t len)
{
    // ptr: 채우고자 하는 메모리의 시작 포인터
    // len: 메모리에 재우고자 하는 값 (int형이지만 내부에서는 unsigned char로 변환되어 저장 )
    ft_memset(ptr, 0, len);
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // char arr[100];
    char *ptr;

    ptr = (char *)malloc(10);
    ft_bzero(ptr, 10);
    for (int i = 0; i<10; i++)
    {
        printf("%c\n", ptr[i]);
    }
    // memset(ptr, 1, 10);
    // printf("%s", ptr);
    // printf("%s", ptr);
    // ft_bzero(arr, sizeof(arr));
    // printf("%s", ptr);
}