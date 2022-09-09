#include <stdio.h>

/**
 * main - Entry point where the alphabets willbe displayed
 *
 * Return: 0 (Success)
 */
int main(void)
{
	/*declaring the variables for the alphabets*/
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for(i = 0; i < 26; i++)
	{
	/*printing out the outputr using putchar*/
	putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
