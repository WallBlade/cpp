SRC		=	Account.cpp tests.cpp \

OBJ		=	$(SRC:.cpp=.o)

CC		=	c++
RM		=	rm -rf
CFAGS	=	-Wall -Werror -Wextra -std=c++98

NAME	=	Account

all:		$(NAME)

$(NAME):	$(OBJ)
				$(CC) $(OBJ) -o $(NAME)

clean:
				$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re