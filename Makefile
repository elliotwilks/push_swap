# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elwilks <elwilks@student.42bangkok.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/12 21:37:46 by elwilks           #+#    #+#              #
#    Updated: 2026/03/12 21:37:47 by elwilks          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

CC		= cc

CFLAGS		= -Wall -Wextra -Werror -I.

SRC		= src/main.c \
		  src/utils/stack_init.c \
		  src/utils/utils.c \
		  src/utils/utils_lib.c \
		  src/utils/error.c \
		  src/operations/op_swap.c \
		  src/operations/op_push.c \
		  src/operations/op_rotate.c \
		  src/operations/op_rrotate.c \
		  src/sort/sort_small.c \
		  src/sort/sort_radix.c \
		  src/sort/sort_turk.c \
		  src/utils/sort_turk_utils.c

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
