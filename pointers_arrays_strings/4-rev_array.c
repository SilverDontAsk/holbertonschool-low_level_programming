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
int temp, begin = 0, end = n - 1;
while(begin < end)
{
	temp = a[begin];
	a[begin] = a[end];
	a[end] = temp;
	begin++;
	end--;
}
}
