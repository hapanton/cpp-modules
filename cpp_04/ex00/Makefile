# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 19:50:32 by qsergean          #+#    #+#              #
#    Updated: 2023/01/28 19:34:17 by qsergean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	polymorphism

SRCSDIR	=	./srcs
OBJSDIR	=	./.objs

SRCS	=	main.cpp	AAnimal.cpp	Cat.cpp	Dog.cpp WrongAnimal.cpp	WrongCat.cpp
OBJS	=	$(addprefix $(OBJSDIR)/,$(SRCS:.cpp=.o))
HEADERS	=	incs/AAnimal.hpp	incs/Cat.hpp	incs/Dog.hpp	incs/WrongAnimal.hpp	incs/WrongCat.hpp

MAKE	=	Makefile

CC		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM		=	rm -rf

all: $(NAME)

$(OBJSDIR):
	mkdir -p $(OBJSDIR)

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