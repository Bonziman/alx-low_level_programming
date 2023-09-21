#include <stddef.h>
#include "lists.h"

/**
 * print_list - Prints elements of linked list & returns the number of nodes.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}
		else
		{
			size_t len = h->len;
			char *str = h->str;
			size_t i;

			for (i = 0; i < len; i++)
			{
				_putchar(str[i]);
			}
		}

		_putchar('\n');
		h = h->next;
		count++;
	}

	return (count);
}

