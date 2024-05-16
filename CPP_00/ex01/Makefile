# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 12:54:18 by cefuente          #+#    #+#              #
#    Updated: 2024/05/16 09:31:43 by cefuente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	book

OBJS	=	main.cpp
HEADER	=	Contact.hpp PhoneBook.hpp
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

all			:	$(NAME)

$(NAME)		:	$(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32mCompiled !\033[0m"

$(OBJS_DIR)%.o	:	$(SRCS_DIR)%.c $(HEADER)
	@mkdir -p $(dir $@)
	@echo "\033[1;30mCompiling [$<]\033m"
	@$(CC) $(FLAGS) -I$(INCLUDES_DIR) -c $< -o $@

clean		:
	@$(RM) $(OBJS_DIR)

fclean		:    clean
	@$(RM) $(NAME)

re			:    fclean all

.PHONY		:	all clean fclean re