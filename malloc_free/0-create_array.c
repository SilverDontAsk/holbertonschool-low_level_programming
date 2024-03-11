#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: characters
 * Return: null if size 0 or try to return pointer to array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = (char *)malloc(size * sizeof(char));
if (size == 0)
{
return ('\0');
}
if (array == NULL)
{
return ('\0');
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
