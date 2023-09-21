#include "lists.h"
#include <stddef.h>

/**
 * list_len - Function that returns the number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: the number of the elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
