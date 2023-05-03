#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *get_nodeint_at_index - return the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: Index of the node to return.
 * Return: pointer to search or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int o = 0;
	listint_t *temp = head;

	while (temp && o < index)
	{
	temp = temp->next;
	o++;
	}

	return (temp ? temp : NULL);
}
