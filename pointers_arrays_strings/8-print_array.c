#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - prints array
 * @a: array to print
 * @n: number of elements of the array
 * return
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}

