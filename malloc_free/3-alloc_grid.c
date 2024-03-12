#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grind - allocates space for a grid
 * @width: gets the width of the grid
 * @height: gets the height of the grid
 * Return: null if failure, or if width or height is 0 or less
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
for (j = 0; j < height; j++)
grid[i][j] = 0;
}
return (grid);
}
