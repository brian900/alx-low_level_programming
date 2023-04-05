#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: a pointer to the head of the linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *mpya;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		mpya = *head;
		*head = (*head)->next;
		free(mpya);
	}

	*head = NULL;
}
