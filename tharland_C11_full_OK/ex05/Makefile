# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharland <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 18:44:56 by tharland          #+#    #+#              #
#    Updated: 2021/03/03 21:18:26 by tharland         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = func.c main.c func2.c
NAME = libft.a
SRCO = ${SRCS:.c=.o}
H = ft.h
.PHONY: all clean fclean  re

.c.o:
		gcc -Wall -Wextra -Werror -I ${H} -c $< -o ${<:.c=.o}

all:	${SRCO}
		ar rc ${NAME} ${SRCO}
		gcc -Wall -Wextra -Werror -L. -lft -o do-op


clean:
			rm -f ${SRCO}

fclean:		clean
			rm -f ${NAME} do-op

re:			fclean all

.SILENT:
