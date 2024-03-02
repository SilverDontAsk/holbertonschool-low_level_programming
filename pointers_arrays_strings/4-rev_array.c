#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse the content of the array
 * @a: array to be reversed
 * @n: size of array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
int revar[n], i;
for (i = 0; i < n; i++)
{
	revar[i] = a[n - i - 1];
}
for (i = 0; i < n; i++)
{
	printf("%d", revar[i]);
}
}
