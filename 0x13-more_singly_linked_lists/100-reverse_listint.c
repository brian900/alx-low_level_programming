#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *Mpya1 = NULL;
	listint_t *Prev1 = NULL;

	if (*head == NULL || head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		Mpya1 = (*head)->next;
		(*head)->next = Prev1;
		Prev1 = *head;
		*head = Mpya1;
	}
	(*head)->next = Prev1;

	return (*head);
}

