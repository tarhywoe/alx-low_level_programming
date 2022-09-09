#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu bytes\n", sizeof(char));
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long));
	printf("Size of a long long int: %lu bytes\n", sizeof(long long));
	printf("Size of a float: %lu bytes\n", sizeof(float));

/*The sizes of the variable types are printed from the memory space*/
	return (0);

}
