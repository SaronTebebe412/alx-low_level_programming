#include "lists.h"

/**
 * pop_listint - main
 * @head: var 1
 * Return: value
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	head_node = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (head_node);
}
