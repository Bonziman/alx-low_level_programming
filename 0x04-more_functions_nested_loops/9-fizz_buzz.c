#include "main.h"

/**
 * main - FIZZ-BUZZ function
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i;
	char *f = "Fizz";
	char *b = "Buzz";
	char *fb = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0)
		{
			_putchar(b + '0');
			_putchar(' ');
		}
		else if (i % 3 == 0)
		{
			_putchar(char f);
			_putchar(' ');
		}
		else if (i % 15 == 0)
		{
			_putchar(char fb);
			_putchar(' ');
		}
		else
		{
			_putchar(i);
			_putchar(' ');
		}
	}
	return (0);
}
