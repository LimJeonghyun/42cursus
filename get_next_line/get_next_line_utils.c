/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:47:20 by jeolim            #+#    #+#             */
/*   Updated: 2022/09/08 19:45:12 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
// ft_strjoin 내의 내장 함수로 쓰임

char *ft_strjoin(char *s1, char *s2)
{
    size_t s1_len;
    size_t s2_len;
    char *arr;

    if (!s1)
    {
        s1 = (char *)malloc(1);
        s1[0] = '\0';
    }

    lens1 = ft_strlen(s1);
    lens2 = ft_strlen(s2);
    arr = (char *)malloc((lens1 + lens2 + 1) * sizeof(char));

    if(!arr)
    {
        free(s1);
        return (0);
    }

    ft_strlcpy(arr, s1, lens1 + 1);
    ft_strlcpy(arr + lens1, s2, lens2 + 1);
    free(s1);
    return (arr);
}
// s1, s2 합쳐서 반환

char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if ((char)c == str[i])
        {
            return ((char *)(str + i));
        }
        i++;
    }
    if (c == 0)
        return ((char *)(str + i));
    return (0);
} // 문자 c를 검색할 문자열 str함수

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    unsigned int i;
    unsigned int len;

    i = 0;
    len = ft_strlen(src);
    if (!dstsize)
        return (len);
    while (i < len && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
} // strjoin에 사용되는 함수

char *ft_strdup(const char *s)
{
    size_t len;
    size_t i;
    char *str;

    len = ft_strlen(s);
    str = malloc(len + 1);
    if (!str)
        return (0);
    while (len--)
        str[i++] = *s++;
    str[i] = 0;
    return (str);
} // 문자열  s를 복사하고 복사된 문자열을 가르키는 포인터를 반환하는 함수