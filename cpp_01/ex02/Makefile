SRC		=	main.cpp \

OBJ		=	${SRC:.cpp=.o}

CC		=	c++
RM		=	rm -rf
CFLAGS	=	-Wall -Werror -Wextra -std=c++98

NAME	=	pointer_x_ref

all		=	${NAME}

$(NAME):	$(OBJ)
				$(CC) $(OBJ) -o $(NAME)

clean:
				$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re