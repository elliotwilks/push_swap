NAME		= push_swap

CC		= cc

CFLAGS		= -Wall -Wextra -Werror -I.

SRC		= src/main.c \
		  src/stack_init.c \
		  src/utils.c \
		  src/utils_lib.c \
		  src/operations/op_swap.c \
		  src/operations/op_push.c \
		  src/operations/op_rotate.c \
		  src/operations/op_rrotate.c \
		  src/sort/sort_small.c \
		  src/sort/sort_radix.c

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
