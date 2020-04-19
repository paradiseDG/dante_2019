/*
** EPITECH PROJECT, 2020
** main
** File description:
** main for dante's star CPE project
*/

#include "my.h"

t_tile **solver_h(t_pos maze, int maxx, int maxy)
{
    return (NULL);
}

void solver(t_pos maze)
{
    int maxy;
    int	maxx;
    t_tile **matrix;

    maxy = tab_line(maze.lab);
    maxx = lenofline(maze.lab[0]);
    matrix = allocated_struct(matrix, maxx, maxy);
    matrix = matrix_creator(matrix, maze);
    my_putmatrix(matrix, maxx, maxy);
    my_putlab(maze.lab);
    if ((matrix = solver_h(maze, maxx, maxy)) == NULL){
        printf("no solution found");
        return ;
    }
    my_putlab(maze.lab);
    printf("\n");
}

int main(int ac, char **av)
{
    t_pos maze;
  
    if (ac != 2)
        return (84);
    if ((maze.lab = labyrinth(av[1])) == NULL)
        return (84);
    solver(maze);
    return (0);
}
