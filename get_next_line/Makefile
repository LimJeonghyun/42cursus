# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 20:54:48 by jeolim            #+#    #+#              #
#    Updated: 2022/09/06 21:22:33 by jeolim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = get_next_line.c get_next_line_utils.c 
OBJS = $(SRCS: .c=.o)

BONUS_SRCS = $(shell find . -iname "*_bonus.c")
# BONUS_SRCS = get_next_line_bonus.c get_next_line_utils_bonus.c
BONUS_OBJS = $(BONUS_SRCS: .c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = get_next_line.a
RM = rm -f
AR = ar -rcs

all : $(NAME)


$(NAME)	:	$(OBJS)
		$(AR) $(NAME) $(OBJS)

%.o : %.c $(INCLUDES)
	$(CC) $(FLAGS) -c $< -o $@

clean	:
		$(RM) $(OBJS) $(BNS_OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	
	make fclean 
	make all

.PHONY	:	all clean fclean re bonus