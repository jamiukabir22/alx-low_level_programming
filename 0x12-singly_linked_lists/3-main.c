#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Anne");
	add_node_end(&head, "Sadiya");
	add_node_end(&head, "Idris");
	add_node_end(&head, "Daniel");
	add_node_end(&head, "Umar");
	add_node_end(&head, "Shamsiya");
	add_node_end(&head, "fateemah");
	add_node_end(&head, "Innovations");
	add_node_end(&head, "Betty");
	add_node_end(&head, "Hamza");
	add_node_end(&head, "Create");
	add_node_end(&head, "Claire");
	add_node_end(&head, "Yusuf");
	add_node_end(&head, "Kina");
	add_node_end(&head, "Kylie");
	add_node_end(&head, "Samantha");
	add_node_end(&head, "Sadiya");
	add_node_end(&head, "Ibrahim");
	add_node_end(&head, "Samantha");
	add_node_end(&head, "Umasa");
	add_node_end(&head, "Khadija");
	add_node_end(&head, "Sani");
	add_node_end(&head, "Hadiza");
	add_node_end(&head, "Python");
	add_node_end(&head, "Ismail");
	add_node_end(&head, "Ibrahim");
	add_node_end(&head, "Aspire");
	add_node_end(&head, "Timothy");
	add_node_end(&head, "Victor");
	add_node_end(&head, "Juliet");
	add_node_end(&head, "Holden");
	add_node_end(&head, "Kalson");
	add_node_end(&head, "Kina");
	print_list(head);
	return (0);
}
