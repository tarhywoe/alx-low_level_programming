#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *
 * @n: input number in integer
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 10)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l + '0');
		return (l);
	}
}
