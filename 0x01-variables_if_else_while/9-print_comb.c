#include <stdio.h>

/**
 * main - Entry point for the numbers
 *
 * Return: 0 (Seuccess)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');

		}

	}
	putchar('\n');
	return (0);

}
