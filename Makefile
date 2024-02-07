FILE = lovelycode.a

SRCS = fd.c\
	   fd_info.c\
	   incrementing.c\
	   pass_it.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all:$(FILE)

$(FILE): $(OBJS)
	ar rcs $(FILE) $(OBJS) $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm lovelycode.a
