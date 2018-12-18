# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/23 16:34:57 by lle-bast          #+#    #+#              #
#    Updated: 2018/12/02 20:04:41 by lle-bast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS += -Wall -Wextra -Werror

CFLAGS += -Iincludes/

NAME = libft.a

SRCS =		ft_strcpy.c		\
			ft_strnew.c		\
			ft_strclr.c

OBJS = $(SRCS:.c=.o)

$(NAME):	 $(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all
