#include "libft.h"

static void ft_strrev(char *str)
{
    int i;
    char tmp;


}

static int ft_abs(int n)
{
    if (n < 0)
        return (n * -1);
    return (n);
}

 char *ft_itoa(int n)
 {
    char *str;
    int sign;
    int i;

    sign = (n < 0);
    str = malloc(sizeof(char) * (11 + sign));
    if (!str)
        return (0);
    i = 0;
    while (n != 0)
    {
        str[i] = '0' + ft_abs(n%10);
        n /= 10;
    }
    if(sign)
        str[i] = '-';
    ft_strrev(str);
    return (str);
 }