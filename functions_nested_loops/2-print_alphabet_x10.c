#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print out the alphabet 10 times
 *
 * Return: void
*/
void print_alphabet_x10(void)
{
        char ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
        _putchar(ch);
        }
        _putchar('\n');
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		print_alphabet();
	}
	return (0);
}
