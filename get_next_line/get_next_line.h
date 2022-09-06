/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:47:35 by jeolim            #+#    #+#             */
/*   Updated: 2022/09/06 20:47:41 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1024
#endif

char *get_next_line(int fd);
char *find_nl(char *temp, int fd, char **str, int *nbyte);
size_t ft_strlne(const char *s);
char *ft_strjoin(char *s1, char *s2);
char *ft_strchr(const char *s, int c);
char *one_line(char *src);
char *ft_strdup(char *Src, char *temp);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

# endif