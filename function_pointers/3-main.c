#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: result of the math
 */
int main(int argc, char *argv[])
{
	int (*math)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	math = get_op_func(argv[2]);

	if (!math)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", math(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
