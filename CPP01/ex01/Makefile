# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 10:17:20 by jedusser          #+#    #+#              #
#    Updated: 2024/10/28 10:26:32 by jedusser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC_DIR = .
OBJ_DIR = obj

NAME = zombiehorde

SRCS = main.cpp \
       Zombie.cpp \
	   zombieHorde.cpp \


OBJS = $(OBJ_DIR)/main.o \
		$(OBJ_DIR)/Zombie.o \
		$(OBJ_DIR)/zombieHorde.o \

all: $(NAME)

$(NAME): $(OBJS) 
	@echo "Building $(NAME)"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@echo "Compiling $< to $@"
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re