# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wben-sai <wben-sai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 10:58:47 by wben-sai          #+#    #+#              #
#    Updated: 2021/09/25 10:59:32 by wben-sai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program

SRC = main.cpp

all : $(NAME)

$(NAME):$(SRC)
	c++ -Wall -Wextra -Werror --std=c++98 $(SRC) -o program
clean:
	rm -rf program
fclean:
	rm -rf program
re: fclean all
