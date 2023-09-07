#include "main.h"
#include <ctype.h>
/**
 * _isdigit - functionthet checks if character is a digit
 *
 * @c: parameter passed to the function
 *
 * Return: 1 if isdigit is true and 0 if not
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
