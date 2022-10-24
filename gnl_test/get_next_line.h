/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:47:35 by jeolim            #+#    #+#             */
/*   Updated: 2022/10/24 21:01:37 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);

typedef struct read_buffer
{
	char	buff[BUFFER_SIZE];
	int		fd;
	int		state;
	// int		offset;
	// ssize_t	read_size;
}	read_buffer;

// state 0: end 1: 
typedef struct file_state
{
	char	*line;
	int		len;
	// int		state;
}	file_state;

char	*get_next_line(int fd);
void	read_line(int fd, read_buffer *buffer, file_state *gnl);
// char	*read_line(int fd, char *buffer);
void	fd_free(read_buffer *buffer, file_state *gnl);
void	get_lines(read_buffer *buffer, file_state *gnl);
void	del_line(read_buffer *buffer);
// char	*get_lines(char *buffer);
// char	*del_line(char *buffer);

void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *ptr, int value, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *s);

#endif
