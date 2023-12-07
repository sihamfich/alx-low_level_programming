#include "lists.h"

/**
 * print_dlistint - a function that prints
 * all the elements of a dlistint_t list.
 * @h: the head node address
 *
 * Return: size of list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t idx = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		idx++;
	}
	return (i);
}
