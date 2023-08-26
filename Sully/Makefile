SRC		=	Sully.c
OBJ		=	$(SRC:.c=.o)
NAME	=	Sully
CC		=	clang
CFLAGS	=	-Wall -Wextra -Werror 

.PHONY			:	all re clean fclean

all				:	$(NAME) Makefile

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
					clang -Wall -Wextra -Werror -o $(NAME) $(SRC); ./$(NAME) > $(TEST_F); diff $(TEST_F)  $(SRC)

				

-include $(DEPENDS)