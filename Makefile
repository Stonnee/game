NAME	=	octocat
SRC		=	*.c
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
OBJ		=	$(SRC:.c=.o)
RM		=	rm -f

$(NAME)	:	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all		:	$(NAME)

clean	:
			$(RM) $(OBJ)
			$(RM) *~*

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re