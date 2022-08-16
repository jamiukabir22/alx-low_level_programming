#include "lists.h"
/**
 * free_listint - frees listint_t list.
 * @head: pointer with first nod
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *p;
	

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
