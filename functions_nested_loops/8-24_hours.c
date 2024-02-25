#include "main.h"
#include <stdio.h>
#include <time.h>
/**
 * jack_bauer - print out all minutes in a day
 *
 */
void jack_bauer(void)
{
	int hour, minute;
	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
