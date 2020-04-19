/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

typedef struct glb_s
{
    char **map;
    char **identity;
} glb_t;

glb_t *put_cells(glb_t *glb, int i, int max);
int show_array(char **map);
int find_cell(char *string);
char *write_string(char *string, int temp);
glb_t *link_cell(glb_t *glb);
int imperfect_maze_generator(int x, int y, glb_t *glb);
int perfect_maze_generator(int x, int y, glb_t *glb);
char **malloc_array(int x, int y);
char **map_identity(int x, int y);
char **fill_map(int x, int y);
int free_array(char **map);