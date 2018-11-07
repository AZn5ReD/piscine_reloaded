# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchirk <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 12:26:14 by jchirk            #+#    #+#              #
#    Updated: 2018/11/07 12:49:03 by jchirk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ft_display_file
CC = gcc
SRC_DIR = ./srcs
INC_DIR = ./includes
SRC = $(SRC_DIR)/*
SRC.O = *.o
FLAGS= -c -I$(INC_DIR)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC)
	$(CC) -o $(NAME) $(SRC.O)

clean:
	rm -f $(SRC.O)

fclean: clean
	rm -f $(NAME)

re: fclean all
