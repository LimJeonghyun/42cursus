/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:47:35 by jeolim            #+#    #+#             */
/*   Updated: 2022/09/07 20:49:46 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5000
#else
# if BUFFER_SIZE < 1
# 	error WRONG BUFFER_SIZE
# endif
#endif

#ifndef OPEN_MAX
# define OPEN_MAX 32
#endif

int				get_next_line(int fd, char **line);

size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dest, const char *src, size_t dstsize);
char			*ft_strjoin(char *s1, char *s2);

// size_t			ft_strlcat(char *dest, const char *src, size_t dstsize);
// char			*ft_strdup(char *s1);

#endif