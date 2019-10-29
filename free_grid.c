#include "holberton.h"

void free_grid_char(char **grid, int size)
{
    int i = 0;

    if (!grid)
        return;

    for (i = 0; i < size && grid && *grid; i++)
    {
        free(grid[i]);
        grid[i] = NULL;
    }

    free(grid);
    grid = NULL;
}
