# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/19 15:38:52 by sgoremyk          #+#    #+#              #
#    Updated: 2024/05/19 15:38:53 by sgoremyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_isalpha.c	ft_lstadd_front.c\
			ft_isdigit.c	ft_lstadd_back.c\
			ft_atoi.c		ft_lstnew.c\
			ft_lstlast.c	ft_lstclear.c\
			ft_lstsize.c	ft_isspace.c\
			ft_putstr.c		ft_strlen.c\
			ft_log.c		ft_sqrt.c

INCLUDE	=	libft.h

OBJ		=	$(SRCS:%.c=%.o)

CFLAGS	=	-Wall -Wextra -Werror

.PHONY	:	all clean fclean re 

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(INCLUDE)
	ar rcs $(NAME) $?

%.o		:	%.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm $(NAME)

re		:	fclean all
