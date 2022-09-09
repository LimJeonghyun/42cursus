/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:46:40 by jeolim            #+#    #+#             */
/*   Updated: 2022/09/09 21:25:10 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer[OPEN_MAX];

	if (BUFFER_SIZE <= 0 || fd < 0 || fd >= OPEN_MAX)
		return (0);
	buffer[fd] = read_line(fd, buffer[fd]);
	if (!buffer[fd])
		return(NULL);
	
	line = get_line(buffer[fd]);
	printf("\nline >> %s", line); 
	buffer[fd] = del_line(buffer[fd]);
	return (line);
	// return ("check\");
}

// char *read_line(int fd, char *buffer)
// {
// 	char *line;
// 	int read_byte;

// 	if (!buffer)
// 		buffer = ft_calloc(1, 1);
// 	line = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
// 	read_byte = 1;
// 	while (read_byte > 0 || ft_strchr(line, '\n'))
// 	{
// 		read_byte = read(fd, line, BUFFER_SIZE);
// 		if (read_byte == -1)
// 		{
// 			free(line);
// 			return (NULL);
// 		}
// 		line[read_byte] = 0;
// 		buffer= fd_free(buffer, line);
// 	}
// 	free(line);
// 	return (buffer);
// }

// char	*fd_free(char *buffer, char *line)
// {
// 	char	*tmp;

// 	tmp = ft_strjoin(buffer, line);
// 	free(buffer);
// 	return (tmp);
// }

// char	*get_line(char *buffer)
// {
// 	char	*line;
// 	int		i;

// 	i = 0;
// 	if (!buffer[0])
// 		return (NULL);
// 	while (buffer[i] != '\n' && buffer[i] != '\0')
// 		i++;
// 	line = ft_calloc(i + 2, sizeof(char));
// 	i = 0;
// 	while (buffer[i] && buffer[i] != '\n')
// 	{
// 		line[i] = buffer[i];
// 		i++;
// 	}
// 	if (buffer[i] && buffer[i] == '\n')
// 		line[i++] = '\n';
// 	return (line);
// }

// char	*del_line(char *buffer)
// {
// 	int		i;
// 	int 	j;
// 	char	*line;

// 	i = 0;
// 	while (buffer[i] != '\n' && !buffer[i])
// 		i++;
// 	if (!buffer[i])
// 	{
// 		free(buffer);
// 		return (NULL);
// 	}
// 	line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
// 	i++;
// 	j = 0;
// 	while (buffer[i])
// 		line[j++] = buffer[i++];
// 	free(buffer);
// 	return (line);
// }


char	*read_line(int fd, char *buffer)
{
	char	*line;
	int		read_byte;

	if (!buffer)
		buffer = ft_calloc(1, 1);
	line = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	read_byte = 1;
	while (read_byte > 0 || ft_strchr(line, '\n'))
	{
		read_byte = read(fd, line, BUFFER_SIZE);
		if (read_byte == -1)
		{
			free(line);
			return (NULL);
		}
		line[read_byte] = 0;
		buffer = fd_free(buffer, line);
		// if (ft_strchr(line, '\n'))
		// 	break ;
	}
	free(line);
	return (buffer);
}

char	*fd_free(char *buffer, char *line)
{
	char	*tmp;

	tmp = ft_strjoin(buffer, line);
	free(buffer);
	return (tmp);
}

char	*get_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char	*del_line(char *buffer)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (!buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
		line[j++] = buffer[i++];
	free(buffer);
	return (line);
}


// #include "get_next_line_bonus.h"

// char	*get_next_line(int fd)
// {
// 	char		*line;
// 	static char	*buffer[OPEN_MAX];
// 	char		*str;
// 	int			readByte;
// 	int			i;

// 	i = 0;
// 	if (BUFFER_SIZE <= 0 || fd < 0 || fd >= OPEN_MAX)
// 		return (0);
// 	line = malloc((sizeof(char) * (BUFFER_SIZE + 1)));
// 	if (!line)
// 		return (0);
// 	while (!ft_strchr(buffer[fd], '\n'))
// 	{
// 		readByte = read(fd, line, BUFFER_SIZE);
// 		if (readByte <= 0)
// 			break ;
// 		line[readByte] = '\0';
// 		buffer[fd] = ft_strjoin(buffer[fd], line);
// 	}
// 	str = make_line(buffer[fd], i);
// 	buffer[fd] = cut_line(buffer[fd]);
// 	free (line);
// 	return (str);
// }

// char	*make_line(char *buffer, int i)
// {
// 	char	*str;

// 	if (!buffer || !buffer[0])
// 		return (NULL);
// 	while (buffer[i] != '\n' && buffer[i] != '\0')
// 		i++;
// 	if (buffer[i] == '\n')
// 		str = malloc(sizeof(char) * (i + 2));
// 	else
// 		str = malloc(sizeof(char) * (i + 1));
// 	if (!str)
// 		return (0);
// 	i = 0;
// 	while (buffer[i] != '\n' && buffer[i] != '\0')
// 	{
// 		str[i] = buffer[i];
// 		i++;
// 	}
// 	if (buffer[i] == '\n')
// 		str[i++] = '\n';
// 	str[i] = '\0';
// 	return (str);
// }

// char	*cut_line(char *buffer)
// {
// 	int		i;
// 	char	*str;

// 	i = 0;
// 	if (buffer == NULL)
// 		return (NULL);
// 	while (buffer[i] != '\n' && buffer[i] != '\0')
// 		i++;
// 	if (buffer[i] == '\0')
// 	{
// 		free(buffer);
// 		return (NULL);
// 	}
// 	if (buffer[i] == '\n')
// 		i++;
// 	str = ft_strdup(&buffer[i]);
// 	free(buffer);
// 	return (str);
// }
