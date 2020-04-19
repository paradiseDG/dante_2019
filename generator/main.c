/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "my.h"

char **malloc_array(int x, int y)
{
    int i = 0;
    char **map = malloc(sizeof(char *) * y + 1);

    while (i < y)
    {
        map[i] = malloc(sizeof(char) * x + 1);
        i++;
    }
    map[i] = NULL;
    return (map);
}

char **map_identity(int x, int y)
{
    char **indentity = malloc_array(x, y);
    int i = 0;
    int z = 0;

    while (z < y)
    {
        while (i < x)
        {
            indentity[z][i] = '0';
            i++;
        }
        indentity[z][i] = '\0';
        i = 0;
        z++;
    }
    return (indentity);
}

char **fill_map(int x, int y)
{
    char **map = malloc_array(x, y);
    int i = 0;
    int z = 0;

    while (z < y)
    {
        while (i < x)
        {
            map[z][i] = 'x';
            i++;
        }
        map[z][i] = '\0';
        i = 0;
        z++;
    }
    return (map);
}

int free_array(char **map)
{
    int i = 0;

    while (map[i] != NULL)
    {
        free(map[i]);
        i++;
    }
    free(map);
    return (0);
}

int main(int ac, char **av)
{
    glb_t *glb = malloc(sizeof(glb_t));
    glb->map = fill_map(atoi(av[1]), atoi(av[2]));
    glb->identity = map_identity(atoi(av[1]), atoi(av[2]));

    srand(time(NULL));
    if (ac == 3)
        imperfect_maze_generator(atoi(av[1]), atoi(av[2]), glb);
    if (ac == 4 && (strcmp(av[3], "perfect") == 0))
    {
        perfect_maze_generator(atoi(av[1]), atoi(av[2]), glb);
    }
    else if (ac < 3)
    {
        printf("not enough argument");
        return (84);
    }
    free_array(glb->map);
    free_array(glb->identity);
    return (0);
}