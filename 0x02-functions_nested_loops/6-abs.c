#include "main.h"
#include <stdlib.h>

/**
 * _abs - Function that prints the absulute value of a number
 *
 * Return: always 0
 *
 * @c: the variable which contains the absulute value of 'n'
 *
 */
int _abs(int c)
{
	int abs_c;

	abs_c = c * -1;
	return (abs_c);
}
