# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 21:43:39 by qsergean          #+#    #+#              #
#    Updated: 2023/01/21 21:45:55 by qsergean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	violence

SRCSDIR	=	./srcs
OBJSDIR	=	./.objs

SRCS	=	main.cpp	Weapon.cpp	HumanA.cpp	HumanB.cpp
OBJS	=	$(addprefix $(OBJSDIR)/,$(SRCS:.cpp=.o))
HEADERS	=	incs/Weapon.hpp	incs/HumanA.hpp	incs/HumanB.hpp

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