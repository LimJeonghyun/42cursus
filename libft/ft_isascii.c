int ft_isascii(int c)
{
    if (c >= 0 && c <= 127) return (1);
    return (0);
}

#include <ctype.h>
#include <stdio.h>
int main()
{
    printf("%d %d", isascii(255), ft_isascii(255));
}