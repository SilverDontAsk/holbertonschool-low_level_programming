#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit of any number
 * @n: this is the number that will be worked on
 * Return: last digit of the number worked on
 */
int print_last_digit(int n)
{
int lastDigit;
lastDigit = n % 10;
if (lastDigit < 0)
{
lastDigit = lastDigit * -1;
}
_putchar('0' + lastDigit);
return (lastDigit);
}
