#include "lists.h"
/**
 * add_nodeint_end - adds new node at the beginning of listint_t
 * @head: Pointer with the address to the first node
 * @n: integer to be added in the first node
 * Return: address to the createed node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(listint_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = p;
	}
	return (p);
}
