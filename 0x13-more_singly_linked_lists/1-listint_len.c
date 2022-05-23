#include "lists.h"

/**
 * listint_len - main
 *
 * @h: var 1
 *
 * Return: value
*/
size_t listint_len(const listint_t *h)
{
	size_t items = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->n != '\0')
			items++;
		h = h->next;
	}

	return (items);
}
