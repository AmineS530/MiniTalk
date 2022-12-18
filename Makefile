CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = minitalk

FTPRINTF = ft_printf/

LIBFT = Libft.a/

SRC = server.c client.c

OBJ = $(SRC:.c=.o)

all : libft ftprintf server client

$(NAME): all

libft :
	make -C $(LIBFT)

ftprintf:
	make -C $(FTPRINTF)

clean:
	rm -rf client.o server.o
	make -C $(LIBFT) clean
	make -C $(FTPRINTF) clean

fclean: clean
	rm -rf client server
	make -C $(LIBFT) fclean
	make -C $(FTPRINTF) fclean

re : fclean all

.PHONY: all clean fclean re
