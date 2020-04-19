
##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

GEN	=	generator/
SOL	=	solver/

all:
	make -C $(GEN)
	make -C $(SOL)

clean:
	make clean -C $(GEN)
	make clean -C $(SOL)

fclean: clean
	make fclean -C $(GEN)
	make fclean -C $(SOL)

re:	fclean all
