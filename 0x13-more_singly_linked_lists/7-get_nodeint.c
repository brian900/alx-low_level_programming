#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node of the list.
 * @index: index of the node, starting at 0.
 *
 * Return: pointer to nth node of the list,
 * or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *mpya1;

	mpya1 = head;
	for (i = 0; mpya1 != NULL && i < index; i++)
		mpya1 = mpya1->next;

	return (mpya1 == NULL ? NULL : mpya1);
}
