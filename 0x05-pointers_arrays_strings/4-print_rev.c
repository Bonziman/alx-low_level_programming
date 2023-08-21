#include "main.h"
/**
 * print_rev - function that prints a string in reverse followed by a newline
 *
 * author: ayman eloirdiwi
 *
 * @s: the pointer to the string
 */
void print_rev(char *s)
{
	int i, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
