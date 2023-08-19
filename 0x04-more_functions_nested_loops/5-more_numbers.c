#include "main.h"

/**
 * more_numbers - function that prints from 0 to 14, 10 times
 *
 * Return: no return
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar(j - 9 + '1');
			}
		}
		_putchar('\n');
	}
}
