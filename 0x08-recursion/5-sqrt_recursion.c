#include "main.h"

/**
 * _sqrt - finds the square root of a value
 * @prev: previous value
 * @root: the square value
 * Return: the square root
 */
int _sqrt(int prv, int root)
{
	if (prv > root)
	{
		return (-1);
	}
	else if (prv * prv == root)
	{
		return (prv);
	}

	return (_sqrt(prv + 1, root));
}

/**
 * _sqrt_recursion - recursive square root of a number
 * @n: the integer
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(1, n));
}
