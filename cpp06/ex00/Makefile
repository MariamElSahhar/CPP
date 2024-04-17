# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 09:23:23 by melsahha          #+#    #+#              #
#    Updated: 2024/04/17 17:43:22 by melsahha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = converter
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp ScalarConverter.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)

tests: $(NAME)
	./$(NAME) 0
	./$(NAME) nan
	./$(NAME) 42.0f


.PHONY: all clean fclean re run
