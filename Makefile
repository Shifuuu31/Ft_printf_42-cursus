# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asaadane <asaadane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 17:55:52 by asaadane          #+#    #+#              #
#    Updated: 2026/11/15 14:05:00 by asaadane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

SRCS			= src/ft_printf.c \
				  src/ft_put_char.c \
				  src/ft_put_str.c \
				  src/ft_put_nbr.c \
				  src/ft_put_unbr.c \
				  src/ft_put_lowhex.c \
				  src/ft_put_uphex.c \
				  src/ft_put_ptr.c

OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I includes

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rc $(NAME) $(OBJS)

%.o: %.c includes/ft_printf.h
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			clean fclean all re
