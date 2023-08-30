#include "main.h"

/**
 * _pow_recursion - function to find the value of a number raised by a power
 * @x: the number.
 * @y: the power.
 * Return: -1 if the power is 0, returns the value if the number is > 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
