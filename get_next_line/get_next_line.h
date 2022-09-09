/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:47:35 by jeolim            #+#    #+#             */
/*   Updated: 2022/09/08 19:44:55 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1024
# endif

# include <stdlib.h>
# include <unistd.h>

//  get_next_line
char	*get_next_line(int fd);
char *read_line(int fd, char *buffer);
char *get_line(char *buffer);
char *del_line(char *buffer);
// char *fd_free(char *buffer, char *line);

// get_next_line_utils
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *ptr, int value, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *s);

#endif