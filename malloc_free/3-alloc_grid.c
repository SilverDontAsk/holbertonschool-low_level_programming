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
int **rid;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
rid = (int **)malloc(height * sizeof(int *));
if (rid == NULL)
return (NULL);
for (i = 0; i < width; i++)
{
rid[i] = (int *)malloc(width * sizeof(int));
if (rid[i] == NULL)
{
for (j = 0; j < i; j++)
free(rid[j]);
free(rid);
return (NULL);
}
for (j = 0; j < height; j++)
rid[i][j] = 0;
}
return (rid);
}
