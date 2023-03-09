# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 17:48:52 by qsergean          #+#    #+#              #
#    Updated: 2023/01/20 23:40:36 by qsergean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	mapb

SRCSDIR	=	./srcs
OBJSDIR	=	./.objs

SRCS	=	main.cpp	Contact.cpp	PhoneBook.cpp
OBJS	=	$(addprefix $(OBJSDIR)/,$(SRCS:.cpp=.o))
HEADERS	=	incs/Contact.hpp	incs/PhoneBook.hpp

MAKE	=	Makefile

CC		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM		=	rm -rf

all: $(NAME)

$(OBJSDIR):
	@mkdir -p $(OBJSDIR)

$(OBJSDIR)/%.o: $(SRCSDIR)/%.cpp ${HEADERS} ${MAKE}
	${CC} ${CFLAGS} -c $< -o $@ 

${NAME}: $(OBJSDIR) $(OBJS)
	$(CC) ${CFLAGS} -o $(NAME) $(OBJS)

# $(NAME): $(SRCS) $(HEADER)
# 	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	${RM} ${OBJS}
	${RM} ${OBJSDIR}

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re