# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 18:00:19 by macauchy          #+#    #+#              #
#    Updated: 2025/07/20 19:01:58 by macauchy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp Fixed.cpp Point.cpp bsp.cpp

HEADERS	=	Fixed.hpp Point.hpp

OBJ_DIR	=	.obj

OBJ		=	$(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

NAME	=	fixed

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
