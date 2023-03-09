# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 17:14:55 by qsergean          #+#    #+#              #
#    Updated: 2023/02/05 19:25:34 by qsergean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	iter

SRCSDIR	=	./srcs
OBJSDIR	=	./.objs

SRCS	=	main.cpp
OBJS	=	$(addprefix $(OBJSDIR)/,$(SRCS:.cpp=.o))
HEADERS	=	incs/iter.hpp

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