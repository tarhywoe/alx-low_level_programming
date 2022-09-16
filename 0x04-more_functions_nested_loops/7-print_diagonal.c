#include "main.h"

/**
 * print_diagonal - entry point to print diagonal
 *
 * @n: number of times the diagonals will be printed
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
