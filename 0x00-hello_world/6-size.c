#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	printf("char size: %lu bytes\n", sizeof(char));
	printf("int size: %lu bytes\n", sizeof(int));
	printf("long size: %lu bytes\n", sizeof(long));
	printf("long long size: %lu bytes\n", sizeof(long long));
	printf("float size: %lu bytes\n", sizeof(float));

/*The sizes of the variable types are printed from the memory space*/
	return (0);

}
