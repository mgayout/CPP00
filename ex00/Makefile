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

NAME	= megaphone
FLAG	= -Wall -Wextra -Werror -std=c++98
SRC		= megaphone.cpp
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