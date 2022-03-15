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
