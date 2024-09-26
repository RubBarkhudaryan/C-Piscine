PRE = ./srcs/
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS = ${addprefix ${PRE}, ${SRC}}
OBJS = ${SRCS:.c=.o}
HEAD = ./includes/
NAME = libft.a
AR = ar rc
RM = rm -f
GCC = gcc
CFLAGS = -Wall -Wextra -Werror

all: 		${NAME}

%.o: %.c
			${GCC} ${CFLAGS} -c -I ${HEAD} $< -o $@

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean: clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re

