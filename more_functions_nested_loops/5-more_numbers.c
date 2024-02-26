#include "main.h"
/**
 * more_numbers - prints 0 to 14 10 times
 * Return: Always 0
 */
void more_numbers(void)
{
	int i, ch;
	for (i = 0; i <= 10; i++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			_putchar(ch + '0');
		}
		_putchar('\n');
	}
}
