# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 15:52:31 by jede-ara          #+#    #+#              #
#    Updated: 2023/02/14 20:07:18 by jede-ara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc
FLAGS = -Wall -Werror -Wextra -g
MLXFLAGS	=	-L ./minilibx -lmlx -Ilmlx -lXext -lX11
LIBFT = ./libft/libft.a
LIBFTDIR = ./libft
MINILIBX_PATH	=	./minilibx
MINILIBX		=	$(MINILIBX_PATH)/libmlx.a
SRC = src/checks_game.c \
		src/start.c \
		src/maps.c \
		src/so_long.c \
		src/end_game.c

OBJ = $(SRC:%.c=%.o)
# ==================================================================================== 
# COLORS
# ====================================================================================

GREEN		:=	\033[1;32m
RED			:=	\033[1;31m
WHITE		:=	\033[1;37m
BOLD		:=	\033[1;1ms

all: ${NAME}

${NAME}: $(OBJ)
	$(MAKE) --no-print-directory -C $(MINILIBX_PATH)
	@echo "$(GREEN) [Success] Minilibix compilation.$(BOLD)"
	$(MAKE) -C $(LIBFTDIR)
	$(CC) $(FLAGS) -lm $(SRC) $(MLXFLAGS) $(LIBFT) -o $(NAME)
	@echo "$(GREEN) [Success] ./so_long created.$(BOLD)"

clean:
	$(MAKE) clean -C ./libft
	@rm -rf $(OBJ)
	@echo "$(RED) [Deleting] object files deleted.$(BOLD)"

fclean: clean
	$(MAKE) fclean -C ./libft
	@rm -rf $(NAME) $(OBJ)
	@echo "$(RED) [Deleting] .a deleted.$(BOLD)"

re: fclean all

.PHONY: all clean fclean re
