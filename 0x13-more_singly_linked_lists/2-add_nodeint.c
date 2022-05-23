#include "lists.h"

/**
 * add_nodeint - main function
 * @head: var 1
 * @n: var 2
 * Return: value
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
