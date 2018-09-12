# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amedvede <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 20:20:32 by amedvede          #+#    #+#              #
#    Updated: 2018/09/11 23:01:25 by amedvede         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBNAME = libft.a
LIBFILES = ft_isdigit.c ft_strchr.c ft_strcpy.c ft_strlen.c ft_tolower.c ft_memset.c ft_strcmp.c ft_strdup.c ft_strncpy.c ft_toupper.c
OBJFILES = ft_isdigit.o ft_strchr.o	ft_strcpy.o	ft_strlen.o	ft_tolower.o ft_memset.o	ft_strcmp.o	ft_strdup.o	ft_strncpy.o ft_toupper.o
COMPILE = gcc -c -Wall -Werror -Wextra
MAKELIB = ar rc
OPTIMIZE = ranlib

$(NAME): all

all:
	$(COMPILE) $(LIBFILES)
	$(MAKELIB) $(LIBNAME) $(OBJFILES)
	$(OPTIMIZE) $(LIBNAME)

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(LIBNAME)

re: fclean all

compile:
	gcc -Wall -Werror -Wextra -I libft.h test.c $(LIBNAME)
