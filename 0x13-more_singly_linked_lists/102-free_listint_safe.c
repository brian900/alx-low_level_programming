#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to a pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *True1, *next_one;

	if (h == NULL || *h == NULL)
		return (size);

	True1 = *h;
	while (True1 != NULL)
	{
		size++;
		next_one = True1->next;
		free(True1);
		if (next_one >= True1)
		{
			/* The list has a loop */
			*h = NULL;
			exit(98);
		}
		True1 = next_one;
	}

	*h = NULL;
	return (size);
}

