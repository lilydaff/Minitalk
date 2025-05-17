# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/30 20:45:32 by hmimouni          #+#    #+#              #
#    Updated: 2025/05/17 05:00:41 by hmessaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 
CFLAGS = -Wall -Wextra -Werror -g3
NAME_CLIENT = client 
NAME_SERVER = server 
LIBFT = ./libft/libft.a
PRINTF = ./libft/printf/printf.a
SRC_CLIENT = src/client.c
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

SRC_SERVER = src/server.c
OBJ_SERVER = $(SRC_SERVER:.c=.o)

all: $(NAME_CLIENT) $(NAME_SERVER)


$(NAME_CLIENT): $(OBJ_CLIENT)
	$(MAKE) --no-print-directory -C ./libft 
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(LIBFT) -o $(NAME_CLIENT)


$(NAME_SERVER): $(OBJ_SERVER)
	$(MAKE) --no-print-directory -C ./libft 
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(LIBFT) -o $(NAME_SERVER)

clean:
	$(MAKE) clean -C ./libft 
	rm -rf $(OBJ_CLIENT) $(OBJ_SERVER)

fclean: clean
	$(MAKE) fclean -C ./libft 
	rm -rf $(NAME_CLIENT) $(NAME_SERVER)

re: fclean all