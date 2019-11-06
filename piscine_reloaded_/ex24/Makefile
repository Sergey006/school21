# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bstanton <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 11:12:24 by bstanton          #+#    #+#              #
#    Updated: 2019/09/04 14:35:00 by bstanton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_putstr.c \
	  srcs/ft_swap.c \
	  srcs/ft_strlen.c
OBJ = ft_putchar.o ft_strcmp.o ft_putstr.o ft_swap.o ft_strlen.o
HEAD = includes/

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(HEAD) -Wall -Wextra -Werror
	ar rc $(NAME) $(OBJ)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re:	fclean all
