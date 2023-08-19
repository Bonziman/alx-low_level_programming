#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line 
 *
 * @n: number of times the line should be drawen (\)
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
