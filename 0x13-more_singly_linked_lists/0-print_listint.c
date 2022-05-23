#include "lists.h"

/**
 * print_listint - main
 *
 * @h: var 1
 *
 * Return: value
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}

	printf("%d\n", h->n);

	return (count);
}
