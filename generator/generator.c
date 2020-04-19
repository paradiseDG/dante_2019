/*
** EPITECH PROJECT, 2020
** generator.c
** File description:
** generator.c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "my.h"

int find_cell(char *string)
{
    int i = 0;

    while (string[i] != '\0') {
        if (string[i] == '*') {
            return (i);
        }
        i++;
    }
    return (0);
}

char *write_string(char *string, int temp)
{
    int i = find_cell(string);

    if (i >= temp) {
        while (temp <= i) {
            string[temp] = '*';
            temp++;
        }
        return (string);
    }
    if (temp >= i) {
        while (temp >= i) {
            string[i] = '*';
            i++;
        }
        return(string);
    }
    return (0);
}

glb_t *link_cell(glb_t *glb)
{
    int i = 1;
    int temp = 0;

    temp = find_cell(glb->map[0]);
    while (glb->map[i] != NULL) {
        glb->map[i] = write_string(glb->map[i], temp);
        temp = find_cell(glb->map[i]);
        i++;
    }
    return (glb);
}

int imperfect_maze_generator(int x, int y, glb_t *glb)
{
    int i = 0;

    while (i < y)
    {
        glb = put_cells(glb, i, x);
        i++;
    }
    glb = link_cell(glb);
    show_array(glb->map);
    return (0);
}


int perfect_maze_generator(int x, int y, glb_t *glb)
{
    int i = 0;

    while (i < y) {
        glb = put_cells(glb, i, x);
        i++;
    }
    glb = link_cell(glb);
    show_array(glb->map);
    return (0);
}