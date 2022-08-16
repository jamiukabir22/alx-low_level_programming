#include "lists.h"
/**
 * print_listint - prints element of listint_t list
 * @h: pointer with address of head of node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)
	{
		printf("%d\n", h->a);
		h = h->next;
		a++;
	}
	return (a);
}
