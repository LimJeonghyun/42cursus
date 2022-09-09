/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:46:40 by jeolim            #+#    #+#             */
/*   Updated: 2022/09/09 17:40:52 by jeolim           ###   ########.fr       */
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

char	*make_line(char *backup, int j)
{
	char	*str;

	if (backup == NULL)
		return (NULL);
	if (backup[0] == '\0')
		return (NULL);
	while (backup[j] != '\n' && backup[j] != '\0')
		j++;
	if (backup[j] == '\n')
		str = malloc(sizeof(char) * (j + 2));
	else
		str = malloc(sizeof(char) * (j + 1));
	if (!str)
		return (0);
	j = 0;
	while (backup[j] != '\n' && backup[j] != '\0')
	{
		str[j] = backup[j];
		j++;
	}
	if (backup[j] == '\n')
		str[j++] = '\n';
	str[j] = '\0';
	return (str);
}

char	*cut_line(char *backup)
{
	int		i;
	char	*str;

	i = 0;
	if (backup == NULL)
		return (NULL);
	while (backup[i] != '\n' && backup[i] != '\0')
		i++;
	if (backup[i] == '\0')
	{
		free(backup);
		return (NULL);
	}
	if (backup[i] == '\n')
		i++;
	str = ft_strdup(&backup[i]);
	free(backup);
	return (str);
}

