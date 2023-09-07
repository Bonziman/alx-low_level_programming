#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: the string to be half printed
 *
 */
void puts_half(char *str)
{
	int first, second, i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	first = len / 2;
	second = len - first;
	for (i = second; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
