#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5000
# endif

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list{
    int			index; // fd 값 저장
    char		*buff; // 남은 문자열을 저장
    struct s_gnl_lst	*next;
} t_list;

#endif