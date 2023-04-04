#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to a pointer to the first element of the list
 * @n: value to be added to the new element
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mpya = malloc(sizeof(listint_t));
	listint_t *kichwa;

	if (mpya == NULL)
		return (NULL);


	mpya->n = n;
	mpya->next = NULL;

	if (*head == NULL)
	{
		*head = mpya;
		return (mpya);
	}

	kichwa = *head;
	while (kichwa->next != NULL)
		kichwa = kichwa->next;

	kichwa->next = mpya;
	return (mpya);
}
