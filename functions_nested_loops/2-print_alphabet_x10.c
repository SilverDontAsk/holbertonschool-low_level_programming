#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print out the alphabet 10 times
 * 
 * main - entry point of program
 *
 * Return: void
*/
void print_alphabet_x10(void)
{
char ch;
int i;

for( i=0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
}
_putchar('\n');
}
int main()
{
print_alphabet_x10();
return (0);
}
