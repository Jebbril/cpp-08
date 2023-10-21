# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orakib <orakib@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 16:24:42 by orakib            #+#    #+#              #
#    Updated: 2023/10/17 17:14:14 by orakib           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

SRC = main.cpp

HEADER = MutantStack.hpp

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98 -g -fsanitize=address

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	
fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re