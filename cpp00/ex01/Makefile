# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 17:21:52 by mcauchy           #+#    #+#              #
#    Updated: 2022/12/21 17:21:53 by mcauchy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp PhoneBook.cpp Contact.cpp

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	phonebook

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

RM		=	/bin/rm -rf

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
