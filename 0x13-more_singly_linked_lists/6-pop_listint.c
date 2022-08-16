#include "lists.h"
/**
 * pop_listint - deletes the head of node
 * @head: pointer with the head, first node adress
 * Return: head nodes data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2;
	int n;

	tmp1 = *head;
	if (tmp1 == NULL)
	{
		return (0);
	}
	tmp2 = *head;
	tmp1 = tmp1->next;
	*head = tmp1;
	n = tmp2->n;
	free(tmp2);
	return (n);
}
