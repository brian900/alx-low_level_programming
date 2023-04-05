#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t hesabu = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	*h = NULL;

	while (current != NULL)
	{
		hesabu++;
		next = current->next;
		free(current);
		if (next >= current)
			break;
		current = next;
	}

	return (hesabu);
}
