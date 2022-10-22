/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:47:35 by jeolim            #+#    #+#             */
/*   Updated: 2022/10/22 18:31:06 by jeolim           ###   ########.fr       */
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
char	*read_line(int fd, char *buffer);
char	*fd_free(char *buffer, char *line);
char	*get_line(char *buffer);
char	*del_line(char *buffer);

void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *ptr, int value, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *s);

#endif
