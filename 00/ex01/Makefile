# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 00:14:16 by ctirions          #+#    #+#              #
#    Updated: 2022/03/17 00:40:25 by ctirions         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= clang++
FLAGS		= -Wall -Wextra -Werror -std=c++98

NAME		= phone_book

all:		$(NAME)

$(NAME):
			@$(CXX) $(FLAGS) contact.class.cpp phone_book.class.cpp main.cpp
			@mv a.out $(NAME)

fclean:
			@rm -f $(NAME)

re:			fclean all

.PHONY:		all fclean re