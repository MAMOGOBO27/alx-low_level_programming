#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Executes the number of elements
 * @h: A pointer to the function
 * Return: Number of elements of the function
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
	number++;
	h = h->next;
	}

	return (number);
}
