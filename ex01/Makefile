# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 08:50:55 by mkamei            #+#    #+#              #
#    Updated: 2021/11/12 13:35:23 by mkamei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCSNAME=	main.cpp Contact.cpp Phonebook.cpp utils.cpp
SRCSDIR	=	.
SRCS	=	$(addprefix $(SRCDIR)/, $(SRCNAME))

OBJSNAME=	$(SRCSNAME:.cpp=.o)
OBJSDIR	=	./objs
OBJS	=	$(addprefix $(OBJSDIR)/, $(OBJSNAME))

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	phonebook
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

leak		:	CFLAGS	+=	-g -fsanitize=leak
leak		:	re

.PHONY		:	all clean fclean re address leak
