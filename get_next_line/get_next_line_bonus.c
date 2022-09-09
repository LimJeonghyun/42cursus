/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:46:40 by jeolim            #+#    #+#             */
/*   Updated: 2022/09/09 20:27:24 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer[OPEN_MAX];
	char		*str;
	int			readByte;
	int			i;

	i = 0;
	if (BUFFER_SIZE <= 0 || fd < 0 || fd >= OPEN_MAX)
		return (0);
	line = malloc((sizeof(char) * (BUFFER_SIZE + 1)));
	if (!line)
		return (0);
	while (!ft_strchr(buffer[fd], '\n'))
	{
		readByte = read(fd, line, BUFFER_SIZE);
		if (readByte <= 0)
			break ;
		line[readByte] = '\0';
		buffer[fd] = ft_strjoin(buffer[fd], line);
	}
	str = make_line(buffer[fd], i);
	buffer[fd] = cut_line(buffer[fd]);
	free (line);
	return (str);
}

char	*make_line(char *buffer, int i)
{
	char	*str;

	if (!buffer || !buffer[0])
		return (NULL);
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	if (buffer[i] == '\n')
		str = malloc(sizeof(char) * (i + 2));
	else
		str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	i = 0;
	while (buffer[i] != '\n' && buffer[i] != '\0')
	{
		str[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		str[i++] = '\n';
	str[i] = '\0';
	return (str);
}

char	*cut_line(char *buffer)
{
	int		i;
	char	*str;

	i = 0;
	if (buffer == NULL)
		return (NULL);
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	if (buffer[i] == '\0')
	{
		free(buffer);
		return (NULL);
	}
	if (buffer[i] == '\n')
		i++;
	str = ft_strdup(&buffer[i]);
	free(buffer);
	return (str);
}

