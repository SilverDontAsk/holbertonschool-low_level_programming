#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there 
 *
 * main - entry point of the program
 *
 * Description basically adding code to a source code to say if n is greater, lower or equal to 0
 *
 * Return 0 (If 0 then success) 
 *
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there 
	 *
	 * if implies that if n is bigger than 0, its positive
	 *
	 * else if here would imply that if n isnt greater or lower than zero, its zero
	 *
	 * else would imply that if n isnt positive, its negative
	 *
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
