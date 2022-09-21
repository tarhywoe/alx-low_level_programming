#include "main.h"

/**
 * _strcpy - copies the string pointed to by src into dest
 *
 * @dest: destination
 * @src: source
 *
 * Return: char with the copy of the string
 */
char _strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;

		count++;
	}
	return (dest);
}
