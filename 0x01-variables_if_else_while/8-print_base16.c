#include <stdio.h>

/**
 * main - Entry point for the number base
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char i, j;

	/*inserting the numeric values*/
	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	/*inserting the alphabetic values of Hexadecimal*/
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);

	putchar('\n');


	return (0);

}
