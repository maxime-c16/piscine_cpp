# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/21 09:31:16 by macauchy          #+#    #+#              #
#    Updated: 2025/07/21 12:33:31 by macauchy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES			=	main.cpp ClapTrap.cpp ScavTrap.cpp

HEADER			=	ClapTrap.hpp ScavTrap.hpp

HEADER_DIR		=	include

HEADER_FILES	=	$(addprefix $(HEADER_DIR)/, $(HEADER))

SRC_DIR	=	src

SRCS	=	$(addprefix $(SRC_DIR)/, $(FILES))

OBJ_DIR	=	.obj

OBJS	=	$(addprefix $(OBJ_DIR)/, $(FILES:.cpp=.o))

NAME	=	ClapTrap

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADER_FILES)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
