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
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s\n)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
