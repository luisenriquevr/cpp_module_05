# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 18:00:26 by lvarela           #+#    #+#              #
#    Updated: 2023/06/24 19:14:40 by lvarela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	$(wildcard *.cpp)
OBJS	=	$(SRCS:%.cpp=%.o)
CC		=	c++
CPPSTD	=	-std=c++98
FLAGS	=	-Wall -Werror -Wextra -Wshadow -pedantic
RM		=	rm -rf
NAME	=	Forms

all		:	$(NAME)

$(NAME) :	$(OBJS)
			$(CC) $(CPPSTD) $(FLAGS) $(OBJS) -o $(NAME)

%.o	:	%.cpp
			$(CC) $(FLAGS) -c $^ -o $@

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)
			$(RM) *_shrubbery

re		:	fclean all

.PHONY	:	all clean fclean re
