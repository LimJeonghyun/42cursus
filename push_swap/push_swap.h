/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:52:10 by jeolim            #+#    #+#             */
/*   Updated: 2023/01/15 16:51:54 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
# include <stdarg.h>
#include <limits.h>
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

typedef struct s_node
{
	int				value; //직접적인 값값
	int				idx; //값 순순위위
	struct s_node	*prev; 
	struct s_node	*next;
}	t_node;

typedef struct s_deque
{
	int				size; // 크기
	struct s_node	*top; 
	struct s_node	*bottom;
}	t_depue;

//parsing
int		**parse_arg(int argc, char **argv);
char	**get_arg(int argc, char **argv);
int		get_number(char *str);
void 	make_arr(int *result, char **str);

//check_arg
int		is_empty(int argc, char **argv);
int		isnt_digit(char **argv);
void	check_duplicate(int **result);
void	check_arg(int argc, char **argv);

//additional
void	print_str(char *s);
void	print_error();

//stack.c
void	push();
void	pop();
int		isEmpty();

#endif