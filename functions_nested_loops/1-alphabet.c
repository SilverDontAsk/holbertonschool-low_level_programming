#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print out the alphabet
 *
 * Return: void
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
}
