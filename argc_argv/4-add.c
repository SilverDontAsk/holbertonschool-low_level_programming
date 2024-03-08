#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
int sum = 0;
int n, i, symb;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (symb = 0; argv[i][symb] != '\0'; symb++)
{
if (!isdigit(argv[i][symb]))
{
printf("Error\n");
return (1);
}
}
n = atoi(argv[i]);
sum += n;
}
printf("%d\n", sum);
return (0);
}
