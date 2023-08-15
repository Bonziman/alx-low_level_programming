#include "main.h"
#include <ctype.h>

/**
 * _islower - function that checks if alphates are lowercase
 *
 * @c: function parameter
 *
 * Return: 1 if c is lowercase 0 if not
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
