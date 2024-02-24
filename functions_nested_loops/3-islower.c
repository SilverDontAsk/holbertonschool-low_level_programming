#include "main.h"
#include <stdio.h>

int main(void)
{
	char ch = 'c';
	if (_islower(ch) != 0)
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
