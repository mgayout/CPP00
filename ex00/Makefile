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

all: $(NAME)

$(NAME):
			c++ $(SRC) $(FLAG) -o $(NAME)

fclean:
			rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re