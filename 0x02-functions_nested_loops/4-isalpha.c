#include "main.h"

/**
 * _isalpha - shows 1 if the input is a letter, lowercase or uppercase
 * and 0 otherwise
 *
 * @c: characters of alphabets bot lowercase and uppercase
 *
 * Return: 1 for letters, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
