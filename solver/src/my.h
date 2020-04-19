/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h for dante's star
*/

#ifndef MY_H_
# define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>

typedef struct  s_tile
{
    int type;
    int	status;
    int F;
    int G;
    int	H;
}t_tile;

typedef struct  s_pos
{
    char **lab;
    int	x;
    int	y;
}t_pos;

void solver(t_pos);
void my_putstr(char *);
void my_putmatrix(t_tile **, int, int);
void my_putlab(char **);

int tab_line(char **);
int lenofline(char *);
int nbr_of_lines(char *);

char *file_reader(char *);

char **make_tab(char *, int);
char **labyrinth(char *);

t_tile **solver_h(t_pos, int, int);
t_tile **allocated_struct(t_tile **, int, int);
t_tile **matrix_creator(t_tile **, t_pos);

#endif /*MY_H_*/
