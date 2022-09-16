#include "main.h"

/**
 * _isdigit - checks whether c is digit or not
 *
 * @c: the character of input
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
