#include "main.h"
/**
 * _puts - prints out string an array
 *
 * @str: the variable
 * Return: the character
 */
void _puts(char *str)
{
	int f = 0;

	while (str[f] != '\0')
	{
		_putchar(str[f]);
		f++;
	}
	_putchar('\n');
}
