/*
** EPITECH PROJECT, 2020
** basics
** File description:
** functions for dante's star
*/

#include "my.h"

void my_putstr(char *str)
{
  write(1, str, strlen(str));
}

void my_putmatrix(t_tile **matrix, int xmax, int ymax)
{
    int	i = 0;
    int	j = 0;

    while (j != ymax){
        while (i != xmax){
            printf("%i", matrix[j][i].type);
            i++;
	}
        j++;
        printf("\n");
    }
}

void my_putlab(char **tab)
{
    int	i = 0;
    int	j = 0;

    while (tab[i]){
        while (tab[i][j]){
            if (tab[i][j] == 'D')
                printf("\x1B[31m█\x1B[0m");
            else if (tab[i][j] == 'o')
                printf("\x1B[32m█\x1B[0m");
            else if (tab[i][j] == '*')
                printf("\x1B[34m█\x1B[0m");
            else if (tab[i][j] == 'X')
                printf("\x1B[37m█\x1B[0m");
            j++;
	}
        printf("\n");
        i++;
    }
}

int nbr_of_lines(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i]){
        if (str[i] == '\n')
            j++;;
        i++;
    }
}

int tab_line(char **tab)
{
    int	i;

    i = 0;
    while (tab[i] != NULL)
        i++;
    return (i);
}
