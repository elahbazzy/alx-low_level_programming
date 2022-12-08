#include "lists.h"

/**
 * print_dlistint - will print the elemenets of a list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		count_nodes++;

		printf("%d\n", h->n);

		h = h->next;
	}


	return (count_nodes);
}

