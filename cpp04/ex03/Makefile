# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/22 09:20:42 by macauchy          #+#    #+#              #
#    Updated: 2025/07/24 17:29:44 by macauchy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES	=	main.cpp Cure.cpp Ice.cpp MateriaSource.cpp AMateria.cpp \
			Character.cpp

TALE_FILES	=	tale.cpp Cure.cpp Ice.cpp MateriaSource.cpp AMateria.cpp \
			Character.cpp

SRC_DIR	=	src

HEADER	=	AMateria.hpp ICharacter.hpp Ice.hpp Cure.hpp MateriaSource.hpp \
			IMateriaSource.hpp Character.hpp

HEADER_DIR	=	include

HEADERS	=	$(addprefix $(HEADER_DIR)/, $(HEADER))

OBJ_DIR	=	.obj

OBJ	=	$(addprefix $(OBJ_DIR)/, $(FILES:.cpp=.o))

TALE_OBJ	=	$(addprefix $(OBJ_DIR)/, $(TALE_FILES:.cpp=.o))

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3

RM	=	rm -rf

NAME	=	interface

TALE_NAME	=	tale

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

tale: $(TALE_OBJ)
	$(CC) $(CFLAGS) -o $(TALE_NAME) $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(HEADER_DIR) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME) $(TALE_NAME)

re: fclean all

.PHONY: all clean fclean re tale
