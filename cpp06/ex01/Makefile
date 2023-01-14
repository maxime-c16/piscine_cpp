# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 17:11:09 by mcauchy           #+#    #+#              #
#    Updated: 2023/01/14 19:22:12 by mcauchy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp Data.cpp

OBJS 	= 	$(SRCS:.cpp=.o)

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3

RM		=	/bin/rm -rf

NAME	=	reinterpret_cast

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o		:	%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
