#include "main.h"
#include <ctype.h>

/**
 * print_sign - Function that èprints sign of a number
 *
 * Return: it depends
 *
 * @n: the parameter passed to the fucntion
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
