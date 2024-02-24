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
int i;

for( i=0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
}
/**
 * main - entry point of the program
 *
 * Description: entry point of the program. call print_alphabet_x10 function and returns 0 if sucess
 *
 * Return: Always 0
 */
int main()
{
print_alphabet_x10();
return (0);
}
