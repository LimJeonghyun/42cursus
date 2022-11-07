/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:52:10 by jeolim            #+#    #+#             */
/*   Updated: 2022/11/07 22:45:42 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

typedef struct s_node
{
	int				value;
	int				idx;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_deque
{
	int				size;
	struct s_node	*top;
	struct s_node	*bottom;
}	t_depue;

//parsing
int	**parse_arg(int argc, char **argv);
void	check_arg(int argc, char **argv);
int		isnt_digit(char **argv);
int		is_empty(int argc, char **argv);

//check_arg
int		is_empty(int argc, char **argv);
int		isnt_digit(char **argv);
void	print_str(char *s);
void	check_arg(int argc, char **argv);

//additional
void	print_str(char *s);

//stack.c
void	push();
void	pop();
int		isEmpty();

#endif