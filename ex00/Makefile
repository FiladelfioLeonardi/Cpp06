# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/01 09:23:08 by fefo              #+#    #+#              #
#    Updated: 2026/10/07 20:14:34 by fefo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS =	main.cpp \
		ScalarConverter.cpp 
		
HEADERS = ScalarConverter.hpp

LIB = -I .
 
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(LIB) -o $@ $^

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re