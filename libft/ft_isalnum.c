int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) 
        return (1);
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

#include <ctype.h>
#include <stdio.h>
int main()
{
    printf("%d %d", isalnum('1'), ft_isalnum('1'));
}