#include "lists.h"

/**
 * add_nodeint - new node added
 * @head: pointer
 * @n: data to input
 *
 * Return: a pointer to the node created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
