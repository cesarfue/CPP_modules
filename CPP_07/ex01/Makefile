# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 12:54:18 by cefuente          #+#    #+#              #
#    Updated: 2024/06/21 16:15:18 by cefuente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	iter

SRCS_DIR		=	srcs/

SRCS			=	main.cpp

OBJS_DIR 		=	objs/
OBJS			=	$(patsubst %.cpp, $(OBJS_DIR)%.o, $(SRCS))

INCLUDES_DIR	=	includes/
INCLUDES		=	$(INCLUDES_DIR)iter.hpp

RM				=	rm -rf
CC				=	c++
FLAGS			=	-Wall -Wextra -Werror -std=c++98 -g

all				:	$(NAME)

$(NAME)			:	$(OBJS) Makefile 
	@$(CC) $(FLAGS) $(OBJS) -I$(INCLUDES_DIR) -o $(NAME)
	@echo "\033[1;32mCompiled !\033[0m"

${OBJS_DIR}%.o	: ${SRCS_DIR}%.cpp $(INCLUDES)
	@mkdir -p $(dir $@)
	@echo "\033[1;37mCompiling [$<]\033m"
	@$(CC) $(FLAGS) -I$(INCLUDES_DIR) -c $< -o $@

$(INCLUDES_DIR)	:
	@mkdir -p $(INCLUDES_DIR)

clean			:
	@$(RM) $(OBJS_DIR)

fclean			:	clean
	@$(RM) $(NAME)

re				:	fclean all

.PHONY			:	all clean fclean re
