#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: the head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp1;
	int data;

	if (*head == NULL)
		return (0);

	temp1 = *head;
	*head = (*head)->next;
	data = temp1->n;
	free(temp1);
	return (data);
}
