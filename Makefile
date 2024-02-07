FILE = lovelycode.a

SRCS = fd.c\
	   fd_info.c\
	   incrementing.c\
	   pass_it.c

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
