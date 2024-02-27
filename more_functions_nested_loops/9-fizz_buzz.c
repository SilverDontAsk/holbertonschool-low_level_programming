#include <stdio.h>
/**
 * main - count 1 to 100 and replace multiples of 3 with fizz, 5 with buzz
 * Return: always 0
 */
int main(void)
{
int n;
n = 100;
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
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
