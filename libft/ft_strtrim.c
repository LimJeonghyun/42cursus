#include "libft.h"

static int isinset(char c, char const *set)
{
    int i;

    i = 0;
    while(set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *trimmed;
    int start;
    int end;
    int i;

    start = 0;
    if (isinset(s1[start], set))
        start++;
    end = ft_strlen(s1);
    if (end > start && isinset(s1[end-1], set))
        end--;
    trimmed = (char *)malloc(sizeof(char) * (end - start + 1));
    if (!trimmed)
        return (0);
    i = 0;
    while(start < end)
        trimmed[i++] = s1[start++];
    trimmed[i] = '\0';
    return (trimmed);
}