#include "lists.h"
/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: Pointer with the address of the pointer to the first node
 * @str: Pointer with the address of the string
 * Return: address to the created node.
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int n;
	list_t *p;

	p = malloc(sizeof(list_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->str = strdup(str);
	if (p->str == NULL)
	{
		free(p);
		return (NULL);
	}
	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	p->len = n;
	p->next = *head;
	*head = p;
	return (p);
}
