#include "main.h"

/**
 * print_square - function to print squares
 *
 * Return: null
 *
 */
void print_square(int size)
{
	int n = size;
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == 1 || i == n || j == 1 || j == n)
			{
				_putchar('#');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
