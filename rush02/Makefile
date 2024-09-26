TARGET = rush02

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = main.c dict-utils.c utils.c help_functions.c parser.c print.c digits_functions.c key_parser.c input_valid.c input_parser.c

OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

fclean:
	rm -f $(TARGET) $(OBJS)

fclean_out:
	rm -f *.out

all: $(TARGET)
