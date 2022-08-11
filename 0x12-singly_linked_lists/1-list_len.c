#include "lists.h"
/**
 * list_len -  returns number of elements in a linked list_t list.
 * @h: Address to the head of the linked list
 * Return: Unsigned int with the number of printed nodes.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}

