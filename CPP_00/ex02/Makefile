# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 12:54:18 by cefuente          #+#    #+#              #
#    Updated: 2024/05/17 14:45:50 by cefuente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out

SRCS	=	Account.cpp tests.cpp 
OBJS	=	$(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))
HEADER	=	Account.hpp

RM		= rm -r
OBJS_DIR = objs/
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

all			:	$(NAME)

$(NAME)		:	$(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32mCompiled !\033[0m"

$(OBJS_DIR)%.o	:	$(SRCS_DIR)%.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@echo "\033[1;30mCompiling [$<]\033m"
	@$(CC) $(FLAGS) -c $< -o $@

clean		:
	@$(RM) $(OBJS_DIR)

fclean		:    clean
	@$(RM) $(NAME)

re			:    fclean all

.PHONY		:	all clean fclean re