#include <stdio.h>

/**
 * main - just the entry point for the program
 *
 * Description: Print byte values of various type on the hardware it is run on
 *
 * Return: 0 (If 0= success)
 */
int main(void)

{
	/**
	* Using printf to print byte values of various types
	*/
	printf("Size of a char: %lu\n byte(s)", sizeof(char));
	printf("Size of an int: %lu\n byte(s)", sizeof(int));
	printf("Size of a long int: %lu\n byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu\n byte(s)", sizeof(long long int));
	printf("Size of a float: %lu\n byte(s)", sizeof(float));

	return (0);
}
