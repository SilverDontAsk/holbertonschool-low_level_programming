#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of the elements
 * Return: pointer to allocated memory, null if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *io;
unsigned int totsize, i;
if (size == 0 || nmemb == 0)
return (NULL);
totsize = nmemb * size;
io = malloc(totsize);
if (io == NULL)
return (NULL);
for (i = 0; i < totsize; i++)
*((char *)io + i) = 0;
return (io);
}
