#include "lists.h"

/**
 * reverse_listint - main
 * @head: var 1
 *
 * Return: val
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x;
	listint_t *y;

	x = NULL;
	y = NULL;

	while (*head != NULL)
	{
		y = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = y;
	}

	*head = x;
	return (*head);
}
