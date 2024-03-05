#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix of integers
 * @a: array of integers
 * @size: size of the array
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
int add1 = 0;
int add2 = 0;
int i;
for (i = 0; i < size; i++)
{
	add1 += *(a + i * size + i);
	add2 += *(a + i * size + (size - 1 - i));
}
printf("%d, %d\n", add1, add2);
}
