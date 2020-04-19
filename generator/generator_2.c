/*
** EPITECH PROJECT, 2020
** gen
** File description:
** nerator
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "my.h"

glb_t *put_cells(glb_t *glb, int i, int max)
{
    int x = 0;

    x = rand() % (max - 1);
    glb->map[i][x] = '*';
    glb->identity[i][x] = '1';
    return (glb);
}

int show_array(char **map)
{
    int i = 0;

    while (map[i] != NULL)
    {
        printf("%s\n", map[i]);
        i++;
    }
    return (0);
}