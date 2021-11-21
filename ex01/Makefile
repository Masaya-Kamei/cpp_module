# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 21:14:09 by mkamei            #+#    #+#              #
#    Updated: 2021/11/20 15:05:37 by mkamei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCSNAME=	main.cpp ClapTrap.cpp ScavTrap.cpp
SRCSDIR	=	.
SRCS	=	$(addprefix $(SRCDIR)/, $(SRCNAME))

OBJSNAME=	$(SRCSNAME:.cpp=.o)
OBJSDIR	=	./objs
OBJS	=	$(addprefix $(OBJSDIR)/, $(OBJSNAME))

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	a.out
INCLUDE =   -I./

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(CFLAGS) $(INCLUDE) -o $@ $(OBJS)

$(OBJSDIR)/%.o	:	$(SRCSDIR)/%.cpp
			@mkdir -p $(dir $@)
			$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

clean		:
				-rm -f $(OBJS)

fclean		:
				-rm -f $(NAME) $(OBJS)

re			:	fclean all

address		:	CFLAGS	+=	-g -fsanitize=address
address		:	re

leak		:	CC		=	/usr/local/opt/llvm/bin/clang++
leak		:	CFLAGS	=	-g -fsanitize=leak
leak		:	re

.PHONY		:	all clean fclean re address leak
