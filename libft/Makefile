# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 13:38:27 by tcosta-d          #+#    #+#              #
#    Updated: 2023/05/11 17:31:51 by tcosta-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
	ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
	ft_toupper.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c ft_split.c ft_striteri.c ft_strjoin.c ft_strmapi.c \
	ft_strtrim.c ft_substr.c \

BONUS_SRC = ft_lstnew_bonuc.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

OBJS = ${SRC:.c=.o}

BONUS_OBJS = ${BONUS_SRC:.c=.o}

INCLUDE = -I .

CC = cc	

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${FLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

bonus:	${BONUS_OBJS}
		ar rcs ${NAME} ${BONUS_OBJS}

clean:
		${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
		${RM} ${NAME}

tclean: clean
		${RM} teste

re: fclean all

teste:
		${CC} ${CFLAGS} ${INCLUDE} main.c ${NAME} -o teste

.PHONY: all clean fclean re