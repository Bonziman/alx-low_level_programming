#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_numbers - a function that prints numbers from 0 to 9 and a new line
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
