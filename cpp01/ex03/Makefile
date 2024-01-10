# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 22:31:10 by melsahha          #+#    #+#              #
#    Updated: 2023/12/19 21:11:45 by melsahha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re