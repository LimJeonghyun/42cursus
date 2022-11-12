#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <limits.h>
#include <unistd.h>

int main()
{
	system("leaks a.out");
	// -fsanitize=address -g
	// int fd_m;
	// char *line_m;
	// char *line_m1;
	// char *line_m2;
    
    // printf(">>>Mandatory<<<\n");
    // fd_m = open("sample.txt", O_RDONLY);
    // line_m = get_next_line(fd_m);
    // printf("\nresult: %s", line_m);
    free(line_m);
	// line_m = get_next_line(fd_m);
    // printf("\nresult: %s", line_m);
    
	line_m1 = get_next_line(fd_m);
	printf("\nresult: %s", line_m1);
	line_m2 = get_next_line(fd_m);
	printf("\nresult: %s", line_m2);

    // printf(">>>Bonus<<<");
    // int fd_b[3];
    // int i;
    // char *line_b;
    // fd_b[0] = open("sample.txt", O_RDONLY);
    // fd_b[1] = open("test.txt", O_RDONLY);
    // fd_b[2] = open("sample.txt", O_RDONLY);
    // i = 0;
    // //  printf("\nindex: %d - %d\n", i, fd_b[i]);
	// // 	line_b = get_next_line(fd_b[i]);
	// // 	printf("\n%s", line_b);
    // while (i < 3)
	// {
    //     printf("\nindex: %d - %d", i, fd_b[i]);
	// 	line_b = get_next_line(fd_b[i]);
	// 	if (!line_b)
    //     {
    //         i++;
    //         continue;
    //     }
    //     printf("\nresult: %s\n",line_b);
	// }
	// free(line_b);
	// close(fd_b);
	return (0);
}

