#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - calculate the sum of all the data entered
 * @head: first note in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}
	return (sum);
}
