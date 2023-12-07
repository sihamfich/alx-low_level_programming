#include "lists.h"

/*
 * insert_dnodeint_at_index - a function that inserts a new
 * node at a given position.
 * @h: A pointer to the head
 * @idx: The position to insert new node
 * @n: The integer for the new node
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *head, *new;

	if (idx == 0)
		return (add_dnodeint(head, n));
	for (; idx != 1; idx--)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}
	if (node->next == NULL)
		return (add_dnodeint_end(head, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = node;
	new->next = node->next;
	node->next->prev = new;
	node->next = new;

