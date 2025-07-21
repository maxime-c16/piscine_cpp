# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 16:51:58 by macauchy          #+#    #+#              #
#    Updated: 2025/07/20 16:52:39 by macauchy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp

OBJ_DIR = .obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = sed

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
