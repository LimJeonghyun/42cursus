# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 13:02:37 by jeolim            #+#    #+#              #
#    Updated: 2022/07/14 15:59:53 by jeolim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_printf.c ft_print_print.c ft_print_unsigned.c ft_print_ptr.c ft_print_hex.c
OBJS = $(SRCS:.c=.o)

CC = cc
FLAGS = -Wall -Wextra -Werror -c
NAME = libftprintf.a
RM = rm -f
AR = ar -rcs
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
