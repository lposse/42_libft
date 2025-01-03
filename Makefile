NAME=libft.a
CC=cc
CFLAGS=-c -Wall -Wextra -Werror
SOURCE_DIR=.
OBJ_DIR=objs
INCLUDE_DIR=includes

SRCS=$(wildcard $(SOURCE_DIR)/*.c)
OBJS=$(SRCS:$(SOURCE_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SOURCE_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
