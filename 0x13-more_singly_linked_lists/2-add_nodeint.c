#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer to the first node of the list
 * @n: value to be added to the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *mpya;

	mpya = malloc(sizeof(listint_t));
	if (mpya == NULL)
		return (NULL);

	mpya->n = n;
	mpya->next = *head;
	*head = mpya;

	return (mpya);
}
