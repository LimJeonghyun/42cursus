/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:52:10 by jeolim            #+#    #+#             */
/*   Updated: 2022/10/26 00:43:49 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>

// node
typedef struct s_node
{
	int	value;
	struct s_node *prev;
	struct s_node *next;
}	t_node;

// stack
typedef struct s_stack
{
	struct s_node *top;
	struct s_node *bottom;
}	t_stack;

//stack.c
void	push();
void	pop();
int		isEmpty();

#endif