/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:27:09 by jeolim            #+#    #+#             */
/*   Updated: 2023/01/15 14:52:35 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

int main(int argc, char **argv)
{
	// t_node	node_a;
	// t_depue deque_a;
	// t_depue deque_b;
	// int		**arr;

	if (argc > 1)
	{
		// arr = parse_arg(argc, argv);
		parse_arg(argc, argv);
	}
	// system("leaks a.out");
	return (0);
}
// gcc main.c parse_arg.c check_arg.c libft/ft_atoi.c libft/ft_split.c libft/ft_strdup.c libft/ft_strjoin.c libft/ft_strlen.c additional.c
// gcc main.c parse_arg.c check_arg.c libft/ft_atoi.c libft/ft_split.c libft/ft_strdup.c libft/ft_strjoin.c libft/ft_strlen.c additional.c libft/ft_calloc.c libft/ft_memset.c