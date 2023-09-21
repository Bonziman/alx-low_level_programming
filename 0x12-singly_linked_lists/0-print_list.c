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
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str)
		}
		h = h->next;
		count++;
	}

	return (count);
}

