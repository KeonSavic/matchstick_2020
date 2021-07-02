##
## EPITECH PROJECT, 2020
## Makefile
## File description:
##  makefile
##

SRC			=		src/main.c					\
					src/init_matchstick.c		\
					src/matchstick.c			\
					src/player_turn.c			\
					src/ai_turn.c				\
					src/check_input.c			\
					src/utils.c					\

OBJ 		= 		$(SRC:.c=.o)

NAME 		=		matchstick

CFLAGS 		= 		-I ./include

LIB 		=		-L ./lib/my -lmy

all: $(NAME)

$(NAME): 		$(OBJ)
		make -C lib/my/
		gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LIB)

clean:
		rm -f $(OBJ)
		$(RM) *.gc*
		$(RM) tests/*.o
		$(RM) tests/*.gc*
		$(RM) src/*.gc*
		$(RM) src/*.o
		$(RM) lib/my/*.o

fclean:		clean
		$(RM) -f $(NAME) *.gc*
		$(RM) -f $(NAME) tests/*.gc*
		$(RM) tests/*.o
		$(RM) *.o
		$(RM) ../lib/my/*.o
		$(RM) unit_tests
		$(RM) calc

re: 	fclean all

tests_run:
		make -C tests/

.PHONY  : all clean fclean re test