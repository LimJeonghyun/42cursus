#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <limits.h>
#include <unistd.h>

int main(int ac, char **av)
{
    char* line;
    int check;
    int fd;

    fd = open("test.txt", O_RDONLY);
    printf("check: %d", fd);
    printf("OPEN_MAX: %ld", sysconf(_SC_OPEN_MAX));
    // line = get_next_line(fd);
    // printf("%s", line);
    return (0);
}