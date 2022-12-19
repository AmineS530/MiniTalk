CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = minitalk

FTPRINTF = ft_printf/

FTPRINTF_LIB = ft_printf/libftprintf.a

LIBFT = libft.a/

LIBFT_LIB = libft.a/libft.a

SRC = server.c client.c

OBJ = $(SRC:.c=.o)

all : $(FTPRINTF_LIB) $(LIBFT_LIB) server client

$(NAME): all

server: server.o $(FTPRINTF_LIB) $(LIBFT_LIB)
	$(CC) $(CFLAGS) $(LIBFT_LIB) $(FTPRINTF_LIB) server.o -o server

client: server client.o $(FTPRINTF_LIB) $(LIBFT_LIB)
	$(CC) $(CFLAGS) $(LIBFT_LIB) $(FTPRINTF_LIB) client.o -o client

$(LIBFT_LIB) :
	make -C $(LIBFT)

$(FTPRINTF_LIB):
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
