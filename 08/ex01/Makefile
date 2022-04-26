# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 15:42:56 by ctirions          #+#    #+#              #
#    Updated: 2022/04/26 15:43:17 by ctirions         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX   =	c++
FLAGS =	-Wall -Wextra -Werror -std=c++98

SRCS  =	main.cpp	\
		Span.cpp

OBJS  =	$(SRCS:.cpp=.o)

NAME  =	Span

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