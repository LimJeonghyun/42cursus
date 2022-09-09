/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:46:43 by jeolim            #+#    #+#             */
/*   Updated: 2022/09/09 15:46:44 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5000
# endif

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char	*make_line(char *backup, int i);
char	*cut_line(char *backup);
size_t	ft_strlen(const char *s);

#endif

// typedef struct s_list{
//     int			index; // fd 값 저장
//     char		*buff; // 남은 문자열을 저장
//     struct s_gnl_lst	*next;
// } t_list;
