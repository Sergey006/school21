# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bstanton <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 13:26:05 by bstanton          #+#    #+#              #
#    Updated: 2019/09/04 13:35:31 by bstanton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = srcs/main.c
OBJ = main.o
HEAD = includes/

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(HEAD) -Wall -Wextra -Werror
	gcc $(OBJ) -o $(NAME) -Wall -Wextra -Werror

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)
