# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 13:35:41 by mschaub           #+#    #+#              #
#    Updated: 2023/02/16 12:19:23 by mschaub          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Constants 

NAME = 		push_swap

CC = 		cc

CFLAGS = 	-Wall -Wextra -Werror

RM = 		rm -f

PRINTF = 	cd ft_printf && make

LIB = 		ft_printf/libftprintf.a


# SRC and OBJS

SRC = 		ft_check.c \
			ft_create_stack.c \
			ft_free.c \
			ft_lst_utils.c \
			ft_lst_utils2.c \
			ft_push.c \
			ft_reverse_rotate.c \
			ft_rotate.c \
			ft_small_to_top.c \
			ft_sort_big.c \
			ft_sort_small.c \
			ft_swap.c \
			push_swap.c 
			

OBJS = 		$(SRC:.c=.o)

# Rules

all: start $(NAME)

start:
	@$(PRINTF)

$(NAME): 	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME)

clean:
	rm -rf $(OBJS)
	@cd ft_printf && make clean

fclean: clean
	rm -rf $(NAME) 
	@cd ft_printf && make fclean

re:	fclean all

.PHONY: all clean fclean re 
