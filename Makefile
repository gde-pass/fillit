# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddombya <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/05 16:37:52 by ddombya           #+#    #+#              #
#    Updated: 2017/12/05 16:37:59 by ddombya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC_NAME =	ft_check_place.c \
			ft_check_tetriminos.c \
			ft_create_map.c \
			ft_map_part.c \
			ft_print_tab.c \
			ft_solve.c \
			ft_resolve_map.c \
			main.c

SRC_DIR = ./srcs/

INCL_DIR = includes

OBJ_DIR = ./obj/

SRC = $(addprefix $(SRC_DIR), $(SRC_NAME))

OBJ = $(addprefix $(OBJ_DIR), $(SRC_NAME:.c=.o))

CFLAGS = -Wall -Wextra -Werror 

IFLAGS = -I./libft -I./$(INCL_DIR)

LFLAGS =  -L./libft/ -lft 

all : $(NAME)

.PHONY : all clean

$(NAME) : $(OBJ)
	make -C ./libft/
	gcc $(CFLAGS) $(LFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	gcc $(CFLAGS) -c $(IFLAGS) $^ -o $@

norme :
	norminette $(SRC)
	norminette $(INCL_DIR)

clean:
	rm -f $(OBJ)
	rm -rf $(OBJ_DIR)
	make clean -C libft/

fclean: clean
	make fclean -C libft/
	rm -f $(NAME)

re:fclean all
