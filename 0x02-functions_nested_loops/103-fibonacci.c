#include <stdio.h>

/**
 * main - entry point to add even-valued fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int n1 = 0, n2 = 1, fn, Tn;

	while (fn <= 4000000)
	{
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;


		if ((fn % 2) == 0)
			Tn += fn;


	}
	printf("%ld\n", Tn);

	return (0);
}
