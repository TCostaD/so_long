# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 17:14:49 by tcosta-d          #+#    #+#              #
#    Updated: 2023/11/30 09:02:52 by tcosta-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = src/main.c src/game.c src/map.c

BONUS_SRC =

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

INCLUDES = -I./includes

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJ) -o $(NAME)

all: $(NAME)

bonus: $(BONUS_OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) $(BONUS_OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus