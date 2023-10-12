# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 17:35:04 by mschaub           #+#    #+#              #
#    Updated: 2023/02/15 15:07:41 by mschaub          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -c

CC = cc

NAME = 		libft.a

HEADER = 	libft.h

RM =		rm -f

SRC =		ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_striteri.c \
			ft_strmapi.c


OBJS = 		$(SRC:.c=.o)


all: 		$(NAME)

.c.o:		
	@$(CC) $(CFLAGS) $< -o $(<:.c=.o)

$(NAME): 	$(OBJS)
	@ar -rcs $(NAME) $^

clean:
	@$(RM) $(OBJS) $(OBJSBONUS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all


.PHONY:		all clean fclean re
