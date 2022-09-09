/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:47:32 by jeolim            #+#    #+#             */
/*   Updated: 2022/09/08 19:45:17 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char *buffer;
    char *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    buffer = read_line(fd, buffer);
    if (!buffer)
		return (NULL);
	line = ft_line(buffer);
	buffer = ft_next(buffer);
	return (line);
}

char	*read_line(int fd, char *res)
{
	char	*line;
	int		read_byte;

	// malloc if res dont exist
	if (!res)
		res = ft_calloc(1, 1);
	// malloc buffer
	line = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	read_byte = 1;
	while (read_byte > 0)
	{
		read_byte = read(fd, line, BUFFER_SIZE);
		if (read_byte == -1)
		{
			free(line);
			return (NULL);
		}
		// 0 to end for leak
		line[read_byte] = 0;
		// join and free
		res = ft_free(res, line);
		// quit if \n find
		if (ft_strchr(line, '\n'))
			break ;
	}
	free(line);
	return (res);
}

// join and free
char	*ft_free(char *buffer, char *buf)
{
	char	*temp;

	temp = ft_strjoin(buffer, buf);
	free(buffer);
	return (temp);
}

// delete line find
char	*ft_next(char *buffer)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	// find len of first line
	while (buffer[i] && buffer[i] != '\n')
		i++;
	// if eol == \0 return NULL
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	// len of file - len of firstline + 1
	line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	i++;
	j = 0;
	// line == buffer
	while (buffer[i])
		line[j++] = buffer[i++];
	free(buffer);
	return (line);
}

// take line for return
char	*ft_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	// if no line return NULL
	if (!buffer[i])
		return (NULL);
	// go to the eol
	while (buffer[i] && buffer[i] != '\n')
		i++;
	// malloc to eol
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	// line = buffer
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	// if eol is \0 or \n, replace eol by \n
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	return (line);
}