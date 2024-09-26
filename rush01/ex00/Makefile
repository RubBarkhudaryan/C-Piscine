TARGET = program

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = main.c matric_builder.c matric_fill.c preprocess.c solve.c solve1.c solve2.c solve3.c solve4.c solve5.c

OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

clean_out:
	rm -f *.out

all: $(TARGET)
