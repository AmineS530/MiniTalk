CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = minitalk

FTPRINTF = ft_printf/

FTPRINTF_LIB = ft_printf/libftprintf.a

LIBFT = libft.a/

LIBFT_LIB = libft.a/libft.a

SRC = server.c client.c

SRC_B = server_bonus.c client_bonus.c

OBJ_B = $(SRC_B:.c=.o)

OBJ = $(SRC:.c=.o)

all : $(FTPRINTF_LIB) $(LIBFT_LIB) server client

$(NAME): all

server: server.o $(FTPRINTF_LIB) $(LIBFT_LIB) minitalk.h
	$(CC) $(CFLAGS) $(LIBFT_LIB) $(FTPRINTF_LIB) server.o -o server

client: server client.o $(FTPRINTF_LIB) $(LIBFT_LIB) minitalk.h
	$(CC) $(CFLAGS) $(LIBFT_LIB) $(FTPRINTF_LIB) client.o -o client

bonus: server_bonus.o client_bonus.o $(FTPRINTF_LIB) $(LIBFT_LIB) minitalk.h
	$(CC) $(CFLAGS) $(LIBFT_LIB) $(FTPRINTF_LIB) client_bonus.o -o client_bonus
	$(CC) $(CFLAGS) $(LIBFT_LIB) $(FTPRINTF_LIB) server_bonus.o -o server_bonus

$(LIBFT_LIB) :
	make -C $(LIBFT)

$(FTPRINTF_LIB):
	make -C $(FTPRINTF)

clean:
	rm -rf client.o server.o
	rm -rf client_bonus.o server_bonus.o
	make -C $(LIBFT) clean
	make -C $(FTPRINTF) clean

fclean: clean
	rm -rf client server
	rm -rf client_bonus server_bonus
	make -C $(LIBFT) fclean
	make -C $(FTPRINTF) fclean

re : fclean all

.PHONY: all clean fclean re
