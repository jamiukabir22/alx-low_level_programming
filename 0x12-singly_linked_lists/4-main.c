#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * main - chckes the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Bob");
	add_node_end(&head, "&");
	add_node_end(&head, "Kris");
	add_node_end(&head, "Love");
	add_node_end(&head, "BMW");
	print_list(head);
	free_list(head);
	head = NULL;
	return (0);
}
