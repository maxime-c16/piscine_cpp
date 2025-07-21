# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/19 10:05:07 by macauchy          #+#    #+#              #
#    Updated: 2025/07/19 10:07:55 by macauchy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	megaphone.cpp

OBJ_DIR	=	.obj

OBJS	=	$(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

NAME	=	megaphone

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
