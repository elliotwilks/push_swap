# ===========================
#  Push_Swap Makefile
# ===========================

# Program name
NAME = push_swap

# Compiler + flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Folders
SRC_DIR = src
OBJ_DIR = build
INC_DIR = include

# Find all .c files inside src/
SRC = $(shell find $(SRC_DIR) -name "*.c")

# Convert src/file.c → build/file.o
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

# Include headers
INCLUDES = -I$(INC_DIR) -Ilib/libft -Ilib/ft_printf

# ===========================
# Rules
# ===========================

# Default rule
all: $(NAME)

# Link all object files into executable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# Compile any .c file into matching .o file inside build/
$(OBJ_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Remove object files
clean:
	rm -rf $(OBJ_DIR)

# Remove objects + executable
fclean: clean
	rm -f $(NAME)

# Full rebuild
re: fclean all

# Phony targets (not real files)
.PHONY: all clean fclean re

