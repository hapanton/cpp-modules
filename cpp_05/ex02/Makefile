# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 20:28:11 by qsergean          #+#    #+#              #
#    Updated: 2023/01/31 23:26:33 by qsergean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	bureaucrats

SRCSDIR	=	./srcs
OBJSDIR	=	./.objs

SRCS	=	main.cpp	Bureaucrat.cpp	AForm.cpp\
			ShrubberyCreationForm.cpp	RobotomyRequestForm.cpp\
			PresidentialPardonForm.cpp
OBJS	=	$(addprefix $(OBJSDIR)/,$(SRCS:.cpp=.o))
HEADERS	=	incs/Bureaucrat.hpp\
			incs/AForm.hpp\
			incs/ShrubberyCreationForm.hpp\
			incs/RobotomyRequestForm.hpp\
			incs/PresidentialPardonForm.hpp

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