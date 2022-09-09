#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point where the program for last digit runs
 *
 * Return: Mostly 0 (Success)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Defining the formula for last digit*/
	l = n % 10;

	/*starting the condition to print last digit*/
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	/*the condition if l is equal to zero*/
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	/*otherwise the last digit is less than 6 and not 0*/
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	/*ending the program and returning the output*/
	return (0);
}
