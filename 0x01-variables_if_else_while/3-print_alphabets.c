#include <stdio.h>

/**
 * main - Entry point for printing the alphabets
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		/*printing the lowercase alphabet*/
		putchar(i);

	}

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		/*printing the uppercase alphabet*/
		putchar(i);

	}

	putchar('\n');

	return (0);

}
