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
int l = 0;
while(a[l] != '\0')
{
l++;
}
for (n = 0; n < l; n++)
{
printf("%d", a[n]);
if (n != l - 1)
{
printf(", ");
}
}
printf("\n");
}

