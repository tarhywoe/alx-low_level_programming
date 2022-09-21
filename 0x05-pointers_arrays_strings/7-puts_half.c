#include "main.h"

/**
 * puts_half - prints half of strings
 *
 * @str: the string to be printed
 *
 * Return: Empty
 */
void puts_half(char *str)
{
	int i, j, half;

	i = 0;
	j = 0;
	while (str[i++])
		j++;
	
	if ((j % 2) == 0)
		half = j / 2;

	else
	       half = (j + 1) / 2;
	
	for (i = half; half < j; i++)
		_putchar(str[i]);
	
	_putchar('\n');
}
