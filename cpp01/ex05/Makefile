# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 17:18:47 by macauchy          #+#    #+#              #
#    Updated: 2025/07/20 17:19:25 by macauchy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Harl.cpp

HEADERS	= Harl.hpp

OBJ_DIR	= .obj

OBJ		= $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

NAME	= Harl

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
