# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 17:46:30 by mgayout           #+#    #+#              #
#    Updated: 2024/07/23 17:46:30 by mgayout          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= map
FLAG	= -Wall -Wextra -Werror -std=c++98
SRC		= main.cpp PhoneBook.cpp Contact.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
			g++ $(OBJ) $(FLAG) -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean: clean
			rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re