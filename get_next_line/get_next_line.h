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
// # include <fcntl.h>

typedef struct node{
	char data[BUFFER_SIZE];
	struct node *next;
	struct node *prev;
} node;
// typedef struct Anode{
// 	char data[BUFFER_SIZE];
// 	struct Anode *next;
// };

// typedef struct Bnode{
// 	Anode *head;
// 	Anode *tail; 
// 	struct Bnode *next;
// };

char	*get_next_line(int fd);

#endif