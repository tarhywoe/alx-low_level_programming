#include <stdio.h>

/**
 * main - Entry point for printing the four digits numbers separated with space
 *
 * Return: Mostly 0 (Success)
 */
int main(void)
{
	/*declaring the variables of the numbers*/
	int n1, n2;

	/*stating the conditions for printing the numbers*/
	for (n1 = 0; n1 <= 98; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			/*printing the numbers*/
			putchar((n1 / 10) + '0');
			putchar((n1 % 10) + '0');
			putchar(' ');
			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');

			if (n1 == 98 && n2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
