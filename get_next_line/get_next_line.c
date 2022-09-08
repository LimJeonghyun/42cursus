/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:47:32 by jeolim            #+#    #+#             */
/*   Updated: 2022/09/08 19:45:17 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

char *get_next_line(int fd)
{
    // char *tmp;
    // char *line;
    static node *fd_line;
    char str[BUFFER_SIZE];
    int read_byte; // read에서 반환하는 값

    // fd = 0 : 표준입력
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);

    read_byte = read(fd, str, BUFFER_SIZE);
    printf("\ntmp: %s\n", str);
    if (read_byte == -1)
        return (0);
    
    int i;
    i = 0;
    if (!fd_line){
        fd_line->next = NULL;
        struct node *newNode = malloc(sizeof(struct node));
        newNode->next = fd_line->next;
        newNode->data = str;
        fd_line-> next = newNode;
        // while (str[i]){
        //     i++;
        //     fd_line->data[i] = str[i];

        // }
    }
    // if(fd_line){
        
    // }

    // line = merge_node
    return ("check");
    // return (line);
}