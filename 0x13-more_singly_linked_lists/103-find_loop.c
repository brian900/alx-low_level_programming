#include "lists.h"

/**
 * find_listint_loop - finds the start of a loop in a linked list
 * @head: pointer to the head of the list
 *
 * Return: address of the node where the loop starts,or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Moja, *Mbili;

	if (head == NULL || head->next == NULL)
		return (NULL);

	Moja = head->next;
	Mbili = head->next->next;

	while (Mbili != NULL && Mbili->next != NULL)
	{
		if (Moja == Mbili)
		{
			/* list has a loop */
			Moja = head;
			while (Moja != Mbili)
			{
				Moja = Moja->next;
				Mbili = Mbili->next;
			}
			return (Moja);
		}

		Moja = Moja->next;
		Mbili = Mbili->next->next;
	}

	/* List has no  loop */
	return (NULL);
}

