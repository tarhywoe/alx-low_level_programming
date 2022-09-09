#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 1 (Success)
 *
 */
int main(void)
{
	/*defining the variable type character*/
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	/*without using put() and printf(), we will print the string*/
		write(2, str, 80);

	return (1);

}
