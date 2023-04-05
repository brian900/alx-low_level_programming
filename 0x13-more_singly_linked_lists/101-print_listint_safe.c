#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *runner;
	size_t count;

	if (head == NULL)
		return (0);

	current = head;
	runner = head;
	count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		current = current->next;

		if (current == NULL)
			break;

		runner = runner->next;

		if (runner == NULL)
			break;

		runner = runner->next;

		if (runner == NULL)
			break;

		if (runner == current)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			printf("-> [%p] %d\n", (void *)runner, runner->n);
			printf("-> [%p] %d\n", (void *)runner->next, runner->next->n);
			printf("-> [%p] %d\n", (void *)runner->next->next,
					runner->next->next->n);
			printf("-> [%p] %d\n", (void *)runner->next->next->next,
					runner->next->next->next->n);
			printf("-> [%p] %d\n", (void *)runner->next->next->next->next,
					runner->next->next->next->next->n);
			exit(98);
		}
	}

	return (count);
}

