# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 11:59:08 by macauchy          #+#    #+#              #
#    Updated: 2025/07/20 12:03:31 by macauchy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp Phonebook.cpp Contact.cpp

HEADERS	=	Phonebook.hpp Contact.hpp

OBJ_DIR	=	.obj

OBJS	=	$(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

NAME	=	phonebook

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
