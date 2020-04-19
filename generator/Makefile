
##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	generator.c\
		main.c\
		generator_2.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

CC	=	gcc

RM 	= 	rm -f

CFLAGS	=	-W -Wall -Wextra -g -I ./include

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
