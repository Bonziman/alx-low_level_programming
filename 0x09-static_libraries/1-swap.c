#include "main.h"

/**
 * swap_int - a function to swap the values of 2 integers
 *
 * @a: pointer to a variable
 * @b: pointer to b variabl @b: pointer to b variablee
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
