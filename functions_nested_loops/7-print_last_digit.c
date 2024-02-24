#include "main.h"
#include <stdio.h>
/**
 * main - last digit
 *
 * Return: 0 (If 0, success)
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
