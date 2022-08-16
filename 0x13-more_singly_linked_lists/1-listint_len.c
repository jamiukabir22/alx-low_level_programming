#include "lists.h"
/**
 * listint_len - returns number of element in linked listint
 * @h: Address to head of the linked list
 * Return: unsigned int with number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
