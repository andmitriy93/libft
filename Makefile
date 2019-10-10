# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmian <dmian@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 09:18:50 by dmian             #+#    #+#              #
#    Updated: 2019/09/24 20:31:28 by dmian            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = *.c
OBJ = *.o
INCLUDES = includes

all: $(NAME)

$(NAME): $(SRCS) libft.h
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader *.c