##
## EPITECH PROJECT, 2025
## a Makefile
## File description:
## A Makefile
##

ERROR   = Wall-Wextra-Werror


SRC     =	*.c ##./src/*.cpp

NEWSRC	= 	my_strlen.c
NAME    = 107transfer

TEST 	= tests/*.c

OPT	= --coverage -lcriterion

all: $(NAME)

$(NAME) :
	gcc -o $(NAME) $(SRC) -lm -g3

clean   :
	rm -f *.o
	rm -f *~
	rm -f ./src/*~
	rm -f ./src/*#
	rm -f *#
	rm -f coding-style-reports.log
	rm -f *.gcno *.gcda unit_tests

fclean  :
	rm -f $(NAME)

re      :	fclean all

unit_tests:	fclean all clean
	gcc -o unit_tests $(TEST) $(NEWSRC) $(OPT)

tests_run:	unit_tests
	./unit_tests --verbose
