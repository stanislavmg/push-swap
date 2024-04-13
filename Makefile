NAME 	=	push_swap

INCLUDE =	push_swap.h

SRCS	=	push_swap.c			stack_create.c\
			stack_methods.c		args_validation.c\
			sorting_alg.c

OBJ		=	$(SRCS:%.c=%.o)

LIB		=	libft.a

CFLAGS	=	-Wall -Wextra -Werror

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(INCLUDE) $(LIB)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIB)

$(LIB)	:
	cd libft && make && make clean && mv libft.a ../libft.a

%.o		:	%.c $(INCLUDE) $(LIB)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJ) $(LIB)

fclean	:	clean
	rm -f $(OBJ) $(NAME)

re		:	fclean all