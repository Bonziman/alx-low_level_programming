#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Function that checks if character is a letter (uper or lowercase)
 *
 * Return: 1 if isalpha true 0 if not
 *
 * @c: the parameter passed to the function
 *
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
