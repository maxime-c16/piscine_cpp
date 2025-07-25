# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/25 11:41:25 by macauchy          #+#    #+#              #
#    Updated: 2025/07/25 12:11:28 by macauchy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES	=	main.cpp Bureaucrat.cpp

SRC_DIR	=	src

SRCS	=	$(addprefix $(SRC_DIR)/, $(FILES))

HEADER	=	Bureaucrat.hpp

HEADER_DIR	=	include

HEADERS	=	$(addprefix $(HEADER_DIR)/, $(HEADER))

OBJ_DIR	=	.obj

OBJ	=	$(addprefix $(OBJ_DIR)/, $(FILES:.cpp=.o))

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3

RM	=	rm -rf

NAME	=	bureaucrat

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
