#include "lists.h"

/**
 * *add_nodeint - Adds a new node at the beginning of the function
 * @head: a pointer to the address head
 * @n: The integer for the new node to cointain
 * Return: Fails - NULL. else address of the new elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
