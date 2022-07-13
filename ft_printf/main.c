#include <stdio.h>
#include <stdarg.h>

void printStrings(const char* args, ...)
{
    int i;
    int count;
    va_list ap;

    i = 0;
    count = 0;
    va_start(ap, args);
    while(args[i])
    {
        switch (args[i])
        {
            case 'i':
                printf("%d", va_arg(ap, int));
                break;
            case 'd':
                printf("%f", va_arg(ap, double));
                break;
            case 'c':
                printf("%c", va_arg(ap, int));
                break;
            case 's':
                printf("%s", va_arg(ap, char*));
                break;
            default:
                break;
        }
        i++;
    }
    // i = 0;
    // while(i < count)
    // {
        // char *str = va_arg(ap, char *);
        // printf("%s ", str);
    // }
    va_end(ap);

    printf("\n");
    // printf("%d", count);
}

int main()
{
    printStrings("i", 10); // 정수    
    printStrings("ci", 'a', 10); // 문자, 정수     
    printStrings("dci", 1.234567, 'a', 10); // 실수, 문자, 정수    
    printStrings("sicd", "Hello, world!", 10, 'a', 1.234567); // 문자열, 정수, 문자, 실수    
    return 0;

}