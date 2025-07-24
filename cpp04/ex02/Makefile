# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/22 09:20:42 by macauchy          #+#    #+#              #
#    Updated: 2025/07/22 12:03:22 by macauchy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES	=	main.cpp AAnimal.cpp Cat.cpp Dog.cpp WrongAAnimal.cpp WrongCat.cpp	\
			Brain.cpp

SRC_DIR	=	src

HEADER	=	AAnimal.hpp Cat.hpp Dog.hpp WrongAAnimal.hpp WrongCat.hpp Brain.hpp

HEADER_DIR	=	include

HEADERS	=	$(addprefix $(HEADER_DIR)/, $(HEADER))

OBJ_DIR	=	.obj

OBJ	=	$(addprefix $(OBJ_DIR)/, $(FILES:.cpp=.o))

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM	=	rm -rf

NAME	=	AAnimal

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(HEADER_DIR) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
