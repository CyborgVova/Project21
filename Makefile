cc# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/28 10:55:30 by gcyndi            #+#    #+#              #
#    Updated: 2021/02/28 20:32:39 by gcyndi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS		= ${SRCS:.c=.o}

INCLD		= includes
INCLF		= ft.h

NAME		= libft.a

CC			= gcc

RM			= rm -f
 
CFLAGS		= -Wall -Wextra -Werror -I ${INCLD} -include ${INCLF}
.c.o:
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
LIB			= ar rc

${NAME}:		${OBJS}
				${LIB} ${NAME} ${OBJS}

all:			${NAME}

clean:			
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all
