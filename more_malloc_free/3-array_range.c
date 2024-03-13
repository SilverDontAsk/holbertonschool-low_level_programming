#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: mininum number
 * @max: max number
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
int *a;
int s, i;
if (min > max)
return (NULL);
s = max - min + 1;
a = (int *)malloc(s *sizeof(int));
if (a == NULL)
return (NULL);
for (i = 0; i < s; i++)
a[i] = min++;
return (a);
}
