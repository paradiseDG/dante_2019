/*
** EPITECH PROJECT, 2020
** create_matrix
** File description:
** matrix creator for dante's star
*/

#include "my.h"

t_tile **allocated_struct(t_tile **matrix, int maxx, int maxy)
{
    int i = 0;

    matrix = malloc(sizeof(t_tile) * maxx);
    while (i != maxy){
        matrix[i] = malloc(sizeof(t_tile) * maxx);
        i++;
    }
    return (matrix);
}

t_tile **matrix_creator(t_tile **matrix, t_pos maze)
{
    int i = 0;
    int j = 0;

    while (maze.lab[j] != NULL){
        while (maze.lab[j][i] == '\0'){
            if (maze.lab[j][i] == 'X')
                matrix[j][i].type = 0;
            i++;
        }
        j++;
    }
    return (matrix);
}
