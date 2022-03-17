# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 00:10:14 by ctirions          #+#    #+#              #
#    Updated: 2022/03/17 00:10:15 by ctirions         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98

NAME		= megaphone

all:		$(NAME)

$(NAME):
			@$(CXX) $(FLAGS) megaphone.cpp
			@mv a.out $(NAME)

fclean:
			@rm -f $(NAME)

re:			fclean all

.PHONY:		all fclean re
