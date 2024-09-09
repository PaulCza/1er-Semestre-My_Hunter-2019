##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oh bordel
##

SRC	=	my_put_nbr_str.c		\
		my_putchar.c		\
		my_strcpy.c	\
		my_strdup.c		\
		my_strlen.c	\
		rect.c 	\
		window.c 	\
		game.c 	\
		result.c \
		initialize.c		\

NAME	= my_hunter

OBJ	= $(SRC:.c=.o)

FLAGS = -l csfml-graphics -l csfml-system -l csfml-audio

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(FLAGS)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

