#include "main.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch = 'o';
	if ( _islower(ch))
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');
	return (0);
}
