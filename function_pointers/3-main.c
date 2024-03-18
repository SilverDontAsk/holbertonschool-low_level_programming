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
int num1;
int num2;
char *operator;
int calc;
int (*f)(int, int);
if (argc == 4)
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
operator = argv[2];
num2 = atoi(argv[3]);
(*f)(int, int) = get_op_func(operator);
if (operator == "/" || operator == "%", num1 == 0 || num2 == 0)
{
	printf("Error\n");
	return (100);
}
if (operator != ["+","-","*","/","%"])
{
printf("Error\n");
return (99);
}
calc = f(num1, num2);
return (calc);
}
