#include "main.h"
#include <ctype.h>

/**
 * _isupper - function that checks if alphates are uppercase
 *
 * @c: function parameter
 *
 * Return: 1 if c is uppercase 0 if not
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
