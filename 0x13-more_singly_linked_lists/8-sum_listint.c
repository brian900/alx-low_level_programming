#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the head node of the list.
 *
 * Return: sum of all data (n) of the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *mpya1 = head;

	while (mpya1 != NULL)
	{
		sum += mpya1->n;
		mpya1 = mpya1->next;
	}

	return (sum);
}
