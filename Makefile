# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 19:14:12 by seozcan           #+#    #+#              #
#    Updated: 2021/12/13 15:24:58 by seozcan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c ft_numbers.c ft_strings.c 

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -c

INC		= ft_printf.h

AR		= ar

ARFLAGS	= rcs

OBJS	= ${SRCS:%.c=%.o}

RM		= rm -f

$(NAME):	${OBJS}
	${AR} ${ARFLAGS} ${NAME} ${OBJS} 

$(OBJS):	${SRCS}
	${CC} -I $(INC) ${CFLAGS} ${SRCS}

all:	${NAME}

clean:
	${RM} ${OBJS} ${OBJS_B}

fclean:	clean
	${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
