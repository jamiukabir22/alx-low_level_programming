#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - checks the code
 *
 * Return: Always 0.
 */

int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head, "Alexandro");
	add_node(&head, "Asaia");
	add_node(&head, "Augustin");
	add_node(&head, "Bennett");
	add_node(&head, "Bilal");
	add_node(&head, "Chandler");
	add_node(&head, "Damian");
	add_node(&head, "Sadiya");
	add_node(&head, "Sadiq");
	add_node(&head, "Habiba");
	add_node(&head, "Aisha");
	add_node(&head, "Peter");
	add_node(&head, "Gloria");
	add_node(&head, "Gloria");
	add_node(&head, "Shamrock");
	add_node(&head, "Praylin");
	add_node(&head, "Farida");
	add_node(&head, "Miracle");
	add_node(&head, "Chibuike");
	add_node(&head, "ladidi");
	add_node(&head, "Amina");
	add_node(&head, "Halima");
	add_node(&head, "Chibuike");
	add_node(&head, "Dennis");
	add_node(&head, "William");
	add_node(&head, "Zainab");
	add_node(&head, "Rick");
	add_node(&head, "William");
	print_list(head);
	return (0);
}
