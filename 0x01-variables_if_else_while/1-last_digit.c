#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - The entry point for the program
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int n, n_last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	n_last = n % 10;
	if (n_last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n_last);
	}
	else if (n_last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n_last);
	}
	else if (n_last < 6 && n_last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_last);
	}
	return (0);
}
