/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:58:26 by jeolim            #+#    #+#             */
/*   Updated: 2022/09/19 20:26:02 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gnl.h>

char *get_next_line(int fd)
{
	static s_node	buffer;
	char 			*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);

	return (line);
}