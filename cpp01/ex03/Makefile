# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 16:15:58 by macauchy          #+#    #+#              #
#    Updated: 2025/07/20 16:16:37 by macauchy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp

DIR_OBJ = .obj

OBJ = $(addprefix $(DIR_OBJ)/, $(SRCS:.cpp=.o))

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = weapon

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(DIR_OBJ)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(DIR_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
