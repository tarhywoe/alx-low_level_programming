#include <stdio.h>

/**
 * main - Entry point for the alphabet
 *
 * Return: Mostly 0 (Success)
 */
int main(void)
{
	char i;

	/*statement for printing the alphabets*/
	for (i = 'a' ; i <= 'z' ; i++)
	{
		/*conditional statement for not printing q and e*/
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}

	}

	putchar('\n');

	return (0);

}
