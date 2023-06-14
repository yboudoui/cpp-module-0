# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 13:40:44 by yboudoui          #+#    #+#              #
#    Updated: 2023/06/01 13:35:46 by yboudoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	phoneBook

#-----------------------------------------------------------------------------#

SRCS				=	Contact.cpp\
						PhoneBook.cpp\
						main.cpp

INCS				=	./

OBJS				=	$(SRCS:.cpp=.o)

#-----------------------------------------------------------------------------#

CXX					=	c++

CXXFLAGS			=	-Wall -Wextra -Werror -std=c++98 -g3

RM					=	rm -f

.cpp.o:
				$(CXX) $(CXXFLAGS) -I $(INCS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
