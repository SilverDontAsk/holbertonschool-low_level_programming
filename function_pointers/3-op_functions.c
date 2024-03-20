#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - return sum of a and b
 * @a: integer 1
 * @b: integer 2
 * Return: calculations
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference of a and b
 * @a: integer 1
 * @b: integer 2
 * Return: calculation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product of a and b
 * @a: integer 1
 * @b: integer 2
 * Return: calculation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns of a and b divided
 * @a: integer 1
 * @b: integer 2
 * Return: calculation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns remainder of a and b
 * @a: integer 1
 * @b: integer 2
 * Return: calculation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
