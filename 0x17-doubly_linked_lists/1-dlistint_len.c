#include "lists.h"

/**
 * dlistint_len - a function that returns
 * the number of elements in a linked dlistint_t list.
 * @h: the head node address
 * Return: size of list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t idx = 0;

	while (h)
	{
		h = h->next;
		idx++;
	}
	return (idx);
}
