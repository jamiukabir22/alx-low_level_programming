#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer with first node
 * @index: index to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p;

	p = head;
	if (p == NULL)
	{
		return (NULL);
	}
	while (p != NULL)
	{
		if (i == index)
		{
			return (p);
		}
		p = p->next;
		i++;
	}
	return (NULL);
}
