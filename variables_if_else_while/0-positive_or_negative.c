#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - this is the entry point of the program
 *
 * Description - program to describe n as +,- or =
 *
 * Return: 0 (If 0 then success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*
	 * if implies that if n is bigger than 0, its positive
	 *
	 * else if is here to say that is n is 0, to say its zero
	 *
	 * else would imply that if n isnt positive, its negative
	 */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
