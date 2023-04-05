#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to the first node of the list
 * @idx: index of the list where the new node should be added.Index starts at 0
 * @n: data to be stored in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *mpya3;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	mpya3 = *head;
	for (i = 0; i < idx - 1 && mpya3 != NULL; i++)
		mpya3 = mpya3->next;

	if (mpya3 == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = mpya3->next;
	mpya3->next = new_node;

	return (new_node);
}
