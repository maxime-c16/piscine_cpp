# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 13:59:55 by macauchy          #+#    #+#              #
#    Updated: 2025/07/20 14:04:34 by macauchy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

HEADERS = Zombie.hpp

DIR_OBJ = .obj

OBJ = $(addprefix $(DIR_OBJ)/, $(SRCS:.cpp=.o))

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

RM = rm -rf

ALL: $(NAME)

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

