FILE = lovelycode.a

SRCS = fd_utils.c\
	   incrementing.c\
	   pass_it.c\
	   take_input.c

OBJS = $(SRCS:.c=.o)

CC = gcc

A = ar rcs

CFLAGS = -Wall -Wextra -Werror

all:$(FILE)

$(FILE): $(OBJS)
	$(CC) -o $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm lovelycode.a
