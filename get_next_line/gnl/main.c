// #include <stdio.h>
// #include <limits.h>
// #include <unistd.h>
// #include <stdlib.h>
// #include <fcntl.h>


// int main(void)
// {
// 	int fd;
// 	int max_fd;

// 	printf("===<limits.h>===\n");
// 	printf("OPEN_MAX: %d\n", OPEN_MAX);

// 	printf("===<unistd.h>===\n");
// 	printf("_SC_OPEM_MAX: %ld\n", sysconf(_SC_OPEN_MAX));

// 	printf("===fd===\n");
// 	max_fd = 0;
// 	while ((fd = open("./a", O_RDONLY)) != -1)
// 		max_fd = fd;
// 	printf("max_fd: %d\n", max_fd);
// }

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *itoa(int value, char *buffer, int radix)
{
    int cnt;
    unsigned int no_decimal, result_value;
 
    cnt = 0;
    if (value == 0)                     // value가 0일때
    {
        buffer[0] = '0';
        buffer[1] = '\0';
        return (buffer);
    }
    else if (value < 0)                 // value가 음수일때
    {
        if (radix == 10)            // 10진수일때(음수)
        {
            buffer[0] = '-';
            value *= -1;
            cnt++;
            result_value = value;
            while (value >= radix)
            {
                value /= radix;
                cnt++;
            }
        }
        else                        // 10진수가 아닐때(음수)      
        {
            no_decimal = 0 + value + 1;
            result_value = no_decimal;
            while (no_decimal >= (unsigned int) radix)
            {
                no_decimal /= radix;
                cnt++;
            }
        }
    }
    else                                 // value가 양수일때
    {
        result_value = value;
        while (value >= radix)
        {
            value /= radix;
            cnt++;
        }
    }
    buffer[cnt + 1] = '\0';
    while (result_value > 0)
    {
        if (result_value % radix <= 9)
            buffer[cnt] = result_value % radix + '0';
        else                                          // 11진수 이상일때만 해당('a' ~ '~')
            buffer[cnt] = result_value % radix + 'a' - 10;
        result_value /= radix;
        cnt--;
    }
    return (buffer);
}

int main(void)
{
  int	fd;
  int	i = 0;
  char	tmpname[100];
  do
  {
	itoa(++i, tmpname, 10);
	fd = open(tmpname, O_WRONLY | O_APPEND | O_CREAT, 0644);
    printf("OPEN fd : %d\n", fd);
  } while (fd != -1);
}

//  limits = 10240
//  cluster mac os = 8192 (10240보다 커질 수 있음 -> 오류 발생) 
// 	