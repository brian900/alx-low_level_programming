#include "lists.h"

/**
 * print_listint_safe - prints a linked list of integers
 * @head: a pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *starting_point = head;
	const listint_t *next_point;

	while (starting_point != NULL)
	{
		printf("[%p] %d\n", (void *)starting_point, starting_point->n);
		count++;

		next_point = starting_point->next;

		/* Check if the next pointer points back to a previous node */
		if (next_point <= starting_point)
		{
			printf("-> [%p] %d\n", (void *)next_point, next_point->n);
			exit(98);
		}

		starting_point = next_point;
	}

	return (count);
}
