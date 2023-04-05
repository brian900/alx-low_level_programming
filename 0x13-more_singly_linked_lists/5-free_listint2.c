#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a linked list of integers and sets the head to NULL.
 * @head: A double pointer to the head of the linked list.
 *
 * This function iterates over the linked list pointed to by head, freeing
 * each node one by one using the free() function. Finally, it sets the head
 * pointer to NULL to indicate that the list is now empty.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
