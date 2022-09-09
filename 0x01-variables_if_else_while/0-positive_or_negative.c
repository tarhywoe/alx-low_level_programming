#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point where the program runs
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*giving the command to print number is positive if greater than zero*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/*the command to print number is zero if equal to zero*/
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	/*otherwise number is printed as negative*/
	else
	{
		printf("%d is negative\n", n);
	}

	/*the command to end the program*/
	return (0);

}
