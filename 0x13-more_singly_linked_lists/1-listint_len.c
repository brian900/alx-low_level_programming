#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the linked list
 *
 * Return: number of elements in the linked list, or 0 if list is empty
 */
size_t listint_len(const listint_t *h)
{
	size_t urefu = 0;

	while (h != NULL)
	{
		urefu++;
		h = h->next;
	}

	if (urefu == 0)
	{
		return (0);
	}

	return (urefu);
}
