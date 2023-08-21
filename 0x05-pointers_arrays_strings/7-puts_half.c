#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: the string to be half printed
 *
 */
void puts_half(char *str)
{
	int half, i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	half = len / 2;
	for (i = half; i <= len - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
