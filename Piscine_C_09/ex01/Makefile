# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: medward <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/14 15:46:18 by medward           #+#    #+#              #
#    Updated: 2021/03/14 21:30:21 by medward          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCDIR		= srcs
INCLDIR		= includes

SRCS		= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS		= ${addprefix ${SRCDIR}/,${SRCS:.c=.o}}

NAME		= libft.a

CC = gcc
RM = rm -f

CFLAGS		= -Wall -Wextra -Werror -I${INCLDIR}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
