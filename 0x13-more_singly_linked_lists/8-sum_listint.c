#include "lists.h"
/**
 * sum_listint - sums all the data (n) of a listint_t linked list.
 * @head: pointer with first node
 * Return: Integer with the sum of data
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
	unsigned int i = 0;

	p = head;
	if (head == NULL)
	{
		return (0);
	}
	while (p != NULL)
	{
		i = i + (p->n);
		p = p->next;
	}
	return (i);
}
