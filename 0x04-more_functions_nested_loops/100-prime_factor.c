#include <stdio.h>

/**
 * main - prints prime numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long int p, q;

	p = 612852475143;
	for (q = 2; q <= p; q++)
	{
		if (p % q == 0)
		{
			p /= q;
			q--;
		}
	}
	printf("%ld\n", q);

	return (0);
}
