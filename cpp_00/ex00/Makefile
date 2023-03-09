# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 23:12:54 by qsergean          #+#    #+#              #
#    Updated: 2023/01/21 00:09:15 by qsergean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRCS	=	megaphone.cpp

MAKE	=	Makefile

CFLAGS	=	-Wall -Werror -Wextra -std=c++98
CC		=	c++
RM		=	rm -rf

all: $(NAME)

$(NAME): $(SRCS) $(MAKE)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re