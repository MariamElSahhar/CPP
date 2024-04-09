# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 09:23:23 by melsahha          #+#    #+#              #
#    Updated: 2024/04/09 16:24:01 by melsahha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
INPUT_FILE = input.txt
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp BitcoinExchange.cpp
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
	./$(NAME) $(INPUT_FILE)

.PHONY: all clean fclean re run
