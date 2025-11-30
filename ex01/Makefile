# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 14:15:10 by pcervill          #+#    #+#              #
#    Updated: 2025/11/30 21:30:40 by pcervill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombieHorde

SRC		= main.cpp Zombie.cpp zombieHorde.cpp

OBJ		= $(SRC:.cpp=.o)

CC		= clang++

CFLAGS	=  -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)
	@echo " \033[32m[ OK ] | $(NAME) ready! ✅\033[0m"

$(NAME): $(OBJ)
	@echo " \033[33m[ .. ] | Compiling $(NAME)... \033[0m"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo " \033[35m[ OK ] | $(NAME) fclean ready! 🧹\033[0m"

re: fclean all

.PHONY: all clean fclean re

.SILENT: $(OBJ)