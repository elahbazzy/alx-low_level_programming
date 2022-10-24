#include "lists.h"

/**
 * listint_len - return number of elements in a linkedlist
 * @h: head
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		count_nodes++;

		h = h->next;
	}
	return (count_nodes);
}

