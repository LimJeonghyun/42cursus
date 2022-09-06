/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:47:32 by jeolim            #+#    #+#             */
/*   Updated: 2022/09/06 20:47:41 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    char *line;
    char *str;
    static char *temp;
    int nbyte;

    nbyte = -1;
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    temp = find_nl(temp, fd, &str, &nbyte);

    if (!temp)
        return (0);
    if (str)
        temp = ft_strdup(str + 1, temp);
    if (!nbyte)
    {
        free(temp);
        temp = 0;
    }
    return (line);
}

char *find_nl(char *temp, int fd, char **str, int *nbyte)
{
    char *buf;

    buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buf)
        return (0);
    *str = ft_strchr(temp, '\n');
    while (!(*str) && *nbyte)
    {
        *nbyte = read(fd, buf, BUFFER_SIZE);
        if (*nbyte == -1)
        {
            free(buf);
            return (0);
        }
        buf[*nbyte] = '\0';
        if (*nbyte)
            temp = ft_strjoin(temp, buf);
        *str = ft_strchr(temp, '\n');
    }
    free(buf);
    return (temp);
}

char *ft_strdup(char *src, char *temp)
{
    char *nomi;
    int i;

    i = 0;
    while (src[i])
        i++;
    nomi = (char *)malloc((i + 1) * sizeof(char));
    if (nomi == 0)
    {
        free(temp);
        return (0);
    }
    i = 0;
    while (src[i])
    {
        nomi[i] = src[i];
        i++;
    }
    nomi[i] = '\0';
    free(temp);
    return (nomi);
}