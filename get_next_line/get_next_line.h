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
# define BUFFER_SIZE 5000
# endif

# include <stdlib.h>
# include <unistd.h>

//  get_next_line
char	*get_next_line(int fd);
char	*read_line(int fd, char *res);
char	*ft_free(char *buffer, char *buf);
char	*ft_next(char *buffer);
char	*ft_line(char *buffer);

// get_next_line_utils
size_t	ft_strlen(const char *s);
void	ft_bzero(void *ptr, size_t len);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2, int flag);

#endif