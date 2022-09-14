#include "main.h"

/**
 * _islower - shows 1 if the input is lower case and 0 otherwise
 *
 *@c: character for alphabets lower case
 *
 * Return: 1 for lower case character. 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
