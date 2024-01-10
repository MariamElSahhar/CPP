# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 19:17:33 by melsahha          #+#    #+#              #
#    Updated: 2023/09/10 21:19:25 by melsahha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CXX = c++
CFLAGS = -Wall -Werror -Wextra

SRC = main.cpp Contact.cpp PhoneBook.cpp
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
