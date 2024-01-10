# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 18:49:41 by melsahha          #+#    #+#              #
#    Updated: 2023/09/10 18:57:21 by melsahha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $<

all: $(NAME)

$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
