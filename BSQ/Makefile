# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/06 12:10:54 by gcyndi            #+#    #+#              #
#    Updated: 2021/03/10 16:16:23 by gcyndi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= srcs/bsq.c srcs/ft_open_file.c srcs/ft_double_massive.c

OBJS			= ${SRCS:.c=.o}

INCLD			= includes

NAME			= bsq

CC				= gcc

RM				= rm -rf

CFLAGS			= -Wall -Wextra -Werror -I ${INCLD}

${NAME}:		${OBJS}
				${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:			${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all
