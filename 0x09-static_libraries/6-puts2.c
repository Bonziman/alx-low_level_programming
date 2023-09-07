#include "main.h"

/**
 * puts2 - function to print every other character in a string
 *
 * @str: the pointer to the str
 *
 */
void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

