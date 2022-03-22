# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 02:32:36 by ctirions          #+#    #+#              #
#    Updated: 2022/03/22 03:07:26 by ctirions         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLACK       = $(shell tput -Txterm setaf 0)
RED         = $(shell tput -Txterm setaf 1)
GREEN       = $(shell tput -Txterm setaf 2)
YELLOW      = $(shell tput -Txterm setaf 3)
LIGHTPURPLE	= $(shell tput -Txterm setaf 4)
PURPLE      = $(shell tput -Txterm setaf 5)
BLUE        = $(shell tput -Txterm setaf 6)
WHITE       = $(shell tput -Txterm setaf 7)
RESET       = $(shell tput -Txterm sgr0)

CXX   =	clang++
FLAGS =	-Wall -Wextra -Werror -std=c++98

SRCS  =	main.cpp	\
		Fixed.cpp

OBJS  =	$(SRCS:.cpp=.o)

NAME  =	Fixed

.c.o:
	@$(CXX) $(FLAGS) -c -I ./ $< -o $(<:.cpp=.o)
	@echo "$(LIGHTPURPLE)$< compiled$(RESET)"

$(NAME):	${OBJS}
	@$(CXX) -o $(NAME) $(FLAGS) $(OBJS)

all:		$(NAME)

clean:
	@rm -f $(OBJS)

fclean:     clean
	@rm -f $(NAME)

re:			fclean all

.PHONY:		all fclean clean re