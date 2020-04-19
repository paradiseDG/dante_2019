/*
** EPITECH PROJECT, 2020
** create_lab
** File description:
** map creator used for astar algo in dante's star
*/

#include "my.h"

char **make_tab(char *file, int lines)
{
    char **laby = malloc(sizeof(char *) * (lines + 1));
    int i = 0;
    int k = 0;
    int j = 0;
    int len = lenofline(file + i);

    laby = malloc(sizeof(char *) * (lines + 1));
    while (file[i]){
        len = lenofline(file + i);
        laby[j] = malloc(sizeof(char) * len);
        k = 0;
        while (file[i] != '\n' && file[i] != '\0'){
            laby[j][k] = file[i];
            k++;
            i++;
	}
        laby[j][k] = '\0';
        i++;
        j++;
    }
    laby[j] = NULL;
    return (laby);
}

int lenofline(char *str)
{
    int i = 0;

    while (str[i] != '\n'){
        if (str[i] == '\0')
            return (i);
        i++;
    }
    return (i);
}

int nbr_of_lines(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i]){
        if (str[i] == '\n')
            j++;
        i++;
    }
    return (j);
}

char *file_reader(char *filename)
{
    struct stat stats;
    char *file;
    int  fd;
    int  gotten;
    
    stat(filename, &stats);
    if ((fd = open(filename, O_RDONLY)) == -1)
        return (NULL);
    if ((file = malloc(sizeof(char) * stats.st_size)) == NULL)
        return (NULL);
    while ((gotten = read(fd, file, stats.st_size)) > 0)
        file[gotten] = '\0';
    return (file);
}

char **labyrinth(char *filename)
{
    char **laby;
    char *file;
    int lines;
    int i;

    if ((file = file_reader(filename)) == NULL)
        return (NULL);
    lines = how_many_lines(file);
    laby = make_tab(file, lines);
    return (laby);
}
