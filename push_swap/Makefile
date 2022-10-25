# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 00:09:12 by jeolim            #+#    #+#              #
#    Updated: 2022/10/26 00:40:54 by jeolim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror -c
AR = ar -rcs
RM = rm -f

SRCS =  main.c push_swap.c
OBJS = $(SRCS:.c=.o)





INCLUDES = -I.ft_printf.h

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		make -C ./libft bonus
		cp ./libft/libft.a $(NAME)
		# $(CC) $(FLAGS) $(INCLUDES) $(SRCS)
		$(CC) $(FLAGS) $(SRCS)
		$(AR) $(NAME) $(OBJS)
		
%.o : %.c $(INCLUDES)
	$(CC) $(FLAGS) -c $< -o $@

clean	:
		make -C ./libft clean
		$(RM) $(OBJS)

fclean	:	clean
		make -C ./libft fclean
		$(RM) $(NAME)

re	:	
	make fclean 
	make all

.PHONY	:	all clean fclean re