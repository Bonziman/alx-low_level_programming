#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: A pointer to the head of the linked list.
 */

void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}

	head = NULL;
}

