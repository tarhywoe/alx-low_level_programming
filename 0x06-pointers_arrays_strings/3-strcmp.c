#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: the first string
 * @s2: the second string
 * Return: always
 */
int _strcmp(char *s1, char *s2)
{
	int o = 0;
	
	while (s1[o] == s2[o])
	{
		if (s1[o] == '\0' && s2 == '\0')
			break;
		o++;
	}
	
	return (s1[o] - s2[o]);
}
