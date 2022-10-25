/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:47:32 by jeolim            #+#    #+#             */
/*   Updated: 2022/10/25 18:36:16 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static read_buffer	buffer;
	file_state			gnl;
	char 				*line;

	line = NULL;
	buffer.state = 0;
	gnl.len = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read_line(fd, &buffer, &gnl);
	if (buffer.state == 1)
	{
		// buffer.read_byte = 0;
		return (NULL);
	}
	// 	return (NULL);
	// get_lines(&buffer, &gnl);
	// printf("\nbuffer line >> %s\n", buffer.buff);
	// if (buffer.state == -1)
	// 	return (NULL);
	// del_line(&buffer);
	return (gnl.line);
}

void read_line(int fd, read_buffer *buffer, file_state *gnl)
{
	if (gnl->line == NULL)
		gnl->line = ft_calloc(1, 1);
	if (gnl->line == NULL)
	{
		buffer->state = 1;
		return ;
	}
	while (buffer->read_byte > 0 && buffer->state == 0)
	{
		buffer->read_byte = read(fd, buffer->buff, BUFFER_SIZE);
		// printf("\ngnl : %s\n", gnl->line);
		if (buffer->read_byte == -1)
		{
			buffer->state = 1;
			return ;
		}
		// gnl->line[buffer->read_byte] = 0;
		fd_free(buffer, gnl);
		if (ft_strchr(buffer->buff, '\n'))
			break;
	}
	free(gnl->line);
}

void fd_free(read_buffer *buffer, file_state *gnl)
{
	char *tmp;
	int i;
	
	i = 0;
	tmp = ft_strjoin(buffer->buff, gnl->line);
	while (tmp[i])
	{
		buffer->buff[i] = tmp[i];
		i++;
	}
	buffer->buff[i] = '\n';
	// printf("buffer check >> %s", buffer->buff);
}

void get_lines(read_buffer *buffer, file_state *gnl)
{
	int i;

	i = 0;
	if (!buffer->buff[i])
	{
		// printf("\n*%c*", buffer->buff[i]);
		gnl->line = NULL;
		return ;	
	}
	// printf("working on getting lines");
	while (buffer->buff[i] && buffer->buff[i] != '\n')
		i++;
	gnl->line = ft_calloc(i + 2, sizeof(char));
	if (!gnl->line)
		return ;
	i = 0;
	while (buffer->buff[i] && buffer->buff[i] != '\n')
	{
		gnl->line[i] = buffer->buff[i];
		i++;
	}
	if (buffer->buff[i] && buffer->buff[i] == '\n')
		gnl->line[i++] = '\n';
}

void del_line(read_buffer *buffer)
{
	int i;
	int j;
	char *line;

	i = 0;
	while (buffer->buff[i] && buffer->buff[i] != '\n')
		i++;

	if (!buffer->buff[i])
	{
		return ;
	}
	line = ft_calloc((ft_strlen(buffer->buff) - i + 1), sizeof(char));
	if (!line)
	{
		return ;
	}
	i+=1;
	j = 0;
	// printf(">>%d vs %d",i, ft_strlen(gnl->line));
	while (buffer->buff[i])
		line[j++] = buffer->buff[i++];
	j = 0;
	// printf("\nline:: %s\n", line);
	while (line[j])
	{
		buffer->buff[j] = line[j];
		j++;
	}
	// printf("\n>> line check: %s\n", line);
	// buffer->buff = line;
}