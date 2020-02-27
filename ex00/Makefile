# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kvirolai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 16:10:08 by kvirolai          #+#    #+#              #
#    Updated: 2020/02/20 20:30:05 by kvirolai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SOURCE = ./ft_display_file.c \

OBJ = ./ft_display_file.o

all: $(NAME)

$(NAME): $(OBJ)	
	gcc -Wall -Werror -Wextra $(OBJ) -o $(NAME)

$(OBJ):
	gcc -Wall -Werror -Wextra -c $(SOURCE)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)
