# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/19 15:37:48 by sgoremyk          #+#    #+#              #
#    Updated: 2024/05/19 15:37:49 by sgoremyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	push_swap

INCLUDE =	push_swap.h

SRCS	=	push_swap.c		creating.c\
			methods.c		validation.c\
			sorting.c

OBJ		=	$(SRCS:%.c=%.o)

LIB		=	./libft/libft.a

CFLAGS	=	-Wall -Wextra -Werror

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(INCLUDE)
	$(MAKE) -sC ./libft
	$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)

%.o		:	%.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re