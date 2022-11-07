/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:27:09 by jeolim            #+#    #+#             */
/*   Updated: 2022/11/07 22:53:03 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

int main(int argc, char **argv)
{
	// t_node	node_a;
	// t_depue deque_a;
	// t_depue deque_b;
	int		**arr;

	// node_a = NULL;
	// deque_a = NULL;
	// deque_b = NULL;
	if (argc > 1)
	{
		arr = parse_arg(argc, argv);
	}
	// system("leaks a.out");
	return (0);
}