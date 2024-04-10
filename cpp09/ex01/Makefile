# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 09:23:23 by melsahha          #+#    #+#              #
#    Updated: 2024/04/10 22:26:16 by melsahha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp RPN.cpp
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
	clear
	./$(NAME) "8 9 * 9 - 9 - 9 - 4 - 1 +"
	./$(NAME) "7 7 * 7 -"
	./$(NAME) "1 2 * 2 / 2 * 2 4 - +"
	./$(NAME) "(1 + 1)"

.PHONY: all clean fclean re run
