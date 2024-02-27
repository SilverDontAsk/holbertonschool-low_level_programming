#include <stdio.h>
/**
 * main - entry point of the program
 * @f: fizz if multiple of 3
 * @b: buzz if multiple of 5
 * @g: fizzbuzz if both
 * Return: always 0
 */
int main(void)
{
int n;
n = 100;
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 ==0)
{
printf("FizzBuzz");
}
else if (n % 3 == 0)
{
printf("Fizz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", n);
}
if (n < 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
