CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

SRCS =
OBJS = $(SRC:.c=.o)



all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -c $(SRCS)
	ar -rcs $(NAME) $(OBJS)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
