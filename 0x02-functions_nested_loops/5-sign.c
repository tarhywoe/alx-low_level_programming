#include "main.h"

/**
 * print_sign - determines if the input is greater, equal or less than zero
 *
 * @n: the input number as an integer
 *
 * Return: 1 if greater than zero, 0 if zero & -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
