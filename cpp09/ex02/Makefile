# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 09:23:23 by melsahha          #+#    #+#              #
#    Updated: 2024/04/11 15:24:09 by melsahha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp PmergeMe.cpp
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

test: $(NAME)
	clear
	./$(NAME) `jot -r 3000 1 100000 | tr '\n' ' '`

.PHONY: all clean fclean re run
