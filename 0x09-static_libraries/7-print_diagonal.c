#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 *
 * @n: number of times the line should be drawen (\)
 *
 * @i: just here to help
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
