#include "main.h"

/**
 * print_line - this function prints a line _' n' times
 *
 * @n: the number of times the line will be printed
 *
 * Return: non
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
