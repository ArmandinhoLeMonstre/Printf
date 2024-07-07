# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: armitite <armitite@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/19 13:03:21 by armitite          #+#    #+#              #
#    Updated: 2024/05/19 13:12:50 by armitite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRC	=	ft_printf.c			\
		ft_fonctions.c		\
		ft_hex.c			\

OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar crs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)		

re:	fclean all

.PHONY:	all clean fclean re