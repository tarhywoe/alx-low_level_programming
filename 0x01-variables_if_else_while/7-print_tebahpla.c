#include <stdio.h>

/**
 * main - Entry poit for the alphabets
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	/*this should print out alphabets is descending order*/

	putchar('\n');

	return (0);

}
