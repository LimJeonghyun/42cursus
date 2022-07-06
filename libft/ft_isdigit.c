int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}
#include <ctype.h>
#include <stdio.h>
int main()
{
    printf("%d %d", isdigit(99), ft_isdigit(99));
}