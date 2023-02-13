# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 14:31:34 by mschaub           #+#    #+#              #
#    Updated: 2022/12/20 15:25:14 by mschaub          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		libftprintf.a

CC = 		cc

CFLAGS = 	-c -Wall -Wextra -Werror -I

RM = 		rm -f

LIBFT = ./Libft/libft.a

SRC = 		ft_printf.c \
			ft_print_unsigned.c \
			ft_printchar.c \
			ft_printhex.c \
			ft_printnbr.c \
			ft_printperc.c \
			ft_printstr.c \
			ft_printptr.c

OBJS = 		$(SRC:.c=.o)

all: $(NAME)


$(NAME): 	$(OBJS)
	make -C ./Libft
	cp ./Libft/libft.a $(NAME)
	$(CC) $(CFLAGS) Libft/ft_printf.h $(SRC)
	ar -rcs $(NAME) $^

clean:
	make clean -C ./Libft
	$(RM) $(OBJS)

fclean: clean
	make fclean -C ./Libft
	$(RM) $(NAME)

re: fclean all


.PHONY:		all clean fclean re bonus