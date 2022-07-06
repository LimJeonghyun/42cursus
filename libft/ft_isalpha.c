 
int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) 
        return (1);
    return (0);
}
 
 
#include <ctype.h>
#include <stdio.h>
int main()
{
    printf("compare\n");
    printf("%d, %d\n", isalpha('z'), ft_isalpha('z'));
    printf("%d, %d\n", isalpha(0), ft_isalpha(0));
    printf("%d, %d\n",isalpha('#'), ft_isalpha('#'));
}