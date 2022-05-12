# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 13:17:27 by ctirions          #+#    #+#              #
#    Updated: 2022/03/23 16:32:56 by ctirions         ###   ########.fr        #
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

CXX   =	c++
FLAGS =	-Wall -Wextra -Werror -std=c++98

SRCS  =	main.cpp	\
		HumanA.cpp	\
		HumanB.cpp	\
		Weapon.cpp

OBJS  =	$(SRCS:.cpp=.o)

NAME  =	Fight

.cpp.o:
		@$(CXX) $(FLAGS) -c -I ./ $< -o $(<:.cpp=.o)
		@echo "$(LIGHTPURPLE)$< compiled$(RESET)"

$(NAME):	${OBJS}
		@$(CXX) -o $(NAME) $(FLAGS) $(OBJS)
		@echo "$(GREEN)$(NAME) created$(RESET)"

all:		$(NAME)

clean:
		@rm -f $(OBJS)
		@echo "$(RED)Cleaned$(RESET)"

fclean:     clean
		@rm -f $(NAME)
		@echo "$(RED)Fcleaned$(RESET)"

re:			fclean all

.PHONY:		all fclean clean re