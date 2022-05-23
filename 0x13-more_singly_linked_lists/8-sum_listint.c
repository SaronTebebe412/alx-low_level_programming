#include "lists.h"

/**
 * sum_listint - main
 * @head: var 1
 *
 * Return: total
 */
int sum_listint(listint_t *head)
{
	int total;

	total = 0;
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
