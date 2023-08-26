SRC		=	Grace.c
OBJ		=	$(SRC:.c=.o)
NAME	=	Grace
CC		=	clang
CFLAGS	=	-Wall -Wextra -Werror 
TEST_F	= 	Grace_kid.c

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