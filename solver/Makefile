
##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c		\
		src/basics.c		\
		src/create_lab.c	\
		src/create_matrix	\

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

CC	=	gcc

RM 	= 	rm -f

CFLAGS	=	-W -Wall -Wextra -g -I ./include

MAKE	=	make

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
