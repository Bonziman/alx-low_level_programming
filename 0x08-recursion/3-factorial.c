#include "main.h"
/**
 * factorial- function to return the factorial of a number
 *
 * @n: number to calculate the facturial of
 *
 * Return: 1 if the number is 0, -1 if the number is lower than 0
 * and the factorial if the number is greater than 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
