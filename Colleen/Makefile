SRC		=	Colleen.c
SRCDIR	=	src
OBJ		=	$(SRC:.c=.o)
NAME	=	Colleen
OUTPUT	=	output
CC		=	clang
CFLAGS	=	-Wall -Wextra -Werror 

.PHONY			:	all re clean fclean

all				:	$(NAME)

$(NAME)			:	$(OBJ) Makefile
					$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o	: %.cpp
					$(CC) $(CFLAGS) -c -o $@ $<

clean			:	
					rm -f $(OBJ) $(DEPENDS)

fclean			:	clean
					rm -f $(NAME)

re				:	fclean all

x				: $(NAME)
					./$(NAME)

test			:
					clang -Wall -Wextra -Werror -o Colleen Colleen.c; ./Colleen > tmp_Colleen; diff tmp_Colleen Colleen.c

				

-include $(DEPENDS)