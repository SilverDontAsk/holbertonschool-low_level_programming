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
if (argc != 4)
{
printf("Error\n");
exit (98);
}
num1 = atoi(argv[1]);
operator = argv[2];
num2 = atoi(argv[3]);

f = get_op_func(operator);
if (f == NULL)
{
printf("Error\n");
exit (99);
}
if (num2 == 0 && (*operator == '/' || *operator == '%'))
{
printf("Error\n");
exit (100);
}
calc = (*f)(num1, num2);
printf("%d\n", calc);
return (0);
}
