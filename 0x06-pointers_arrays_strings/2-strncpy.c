#include "main.h"

/**
 * _strncpy - entry point
 * @dest: destination to copy to
 * @src: where to copy from
 * @n: input numbers of characters
 *
 * Return: returns destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}

	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
