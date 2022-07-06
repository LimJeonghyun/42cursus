#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substring;
    int idx;

    idx = 0;
    substring = (char *)malloc(sizeof(char) * (len + 1));
    if (!substring)
        return (0);
    while (s[start])
    {
        substring[idx] = s[start];
        idx++;
        start++;
    }
    substring[idx] = '\0';
    return (substring);
}