SRCS		= srcs/ft_list_dict.c srcs/ft_strdup.c srcs/parser.c srcs/digit_to_str.c srcs/digit_to_str_helpers.c srcs/is_symb.c
OBJS		= ${SRCS:.c=.o}

NAME		= rush-02

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f


.c.o:		
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS} 

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re ${name}

