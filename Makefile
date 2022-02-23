##
## EPITECH PROJECT, 2021
## star
## File description:
## Makefile for the star project
##

NAME = star

MAIN = main.c

SRC = my_putchar.c \
	bottom.c \
	middle_rows.c \
	middle.c \
	put_spaces.c \
	size_one_star.c \
	star.c \
	top.c

all: build

build: $(SRC)
	gcc -o $(NAME) $(MAIN) $(SRC)

clean:
	find . -name "*~" -delete -or -name "#*#" -delete
	find . -name "*.gcda" -delete -or -name "*.gcno" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all build fclean re
