# **************************************************************************** #
# #                                                                              #
# #                                                         :::      ::::::::    #
# #    Makefile                                           :+:      :+:    :+:    #
# #                                                     +:+ +:+         +:+      #
# #    By: lposse <marvin@42.fr>                      +#+  +:+       +#+         #
# #                                                 +#+#+#+#+#+   +#+            #
# #    Created: 2024/12/28 20:40:12 by lposse            #+#    #+#              #
# #                                                     ###   ########.fr        #
# #                                                                              #
# # **************************************************************************** #



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
	$(CC) $(OBJS) -o $(NAME)
       	
$(OBJ_DIR)/%.o: $(SOURCE_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) $< -o $@


clean:
		rm -rf $(OBJ_DIR)

fclean:	clean
		rm -f $(NAME)

re: fclean all


.PHONY: all re clean fclean
