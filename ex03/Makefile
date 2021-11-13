# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 14:43:38 by mkamei            #+#    #+#              #
#    Updated: 2021/11/13 14:45:41 by mkamei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCSNAME=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
SRCSDIR	=	.
SRCS	=	$(addprefix $(SRCDIR)/, $(SRCNAME))

OBJSNAME=	$(SRCSNAME:.cpp=.o)
OBJSDIR	=	./objs
OBJS	=	$(addprefix $(OBJSDIR)/, $(OBJSNAME))

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	weapon
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
