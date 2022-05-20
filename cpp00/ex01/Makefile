# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 13:49:13 by mkamei            #+#    #+#              #
#    Updated: 2022/03/29 16:12:54 by mkamei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCSNAME=	main.cpp Contact.cpp Phonebook.cpp utils.cpp
SRCSDIR	=	.
SRCS	=	$(addprefix $(SRCDIR)/, $(SRCNAME))

OBJSDIR	=	./objs
OBJS	=	$(addprefix $(OBJSDIR)/, $(SRCSNAME:.cpp=.o))
DEPS    :=  $(addprefix $(OBJSDIR)/, $(SRCSNAME:.cpp=.d))

INCLUDE =	-I./
NAME	=	phonebook

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror
CFLAGS	+=	-MMD -MP
CFLAGS	+=	-std=c++98
RM		=	rm -rf

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(CFLAGS) $(INCLUDE) -o $@ $(OBJS)

$(OBJSDIR)/%.o	:	%.cpp
			@mkdir -p $(dir $@)
			$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

-include $(DEPS)

clean		:
				-$(RM) $(OBJS) $(DEPS)

fclean		:	clean
				-$(RM) $(NAME)

re			:	fclean all

debug		:	CFLAGS	+=	-g
debug		:	re

address		:	CFLAGS	+=	-g -fsanitize=address
address		:	re

ifeq ($(shell uname),Darwin)
leak	:	CC		=	/usr/local/opt/llvm/bin/clang++
endif
leak		:	CFLAGS	+=	-g -fsanitize=leak
leak		:	re

.PHONY		:	all clean fclean re debug address leak
