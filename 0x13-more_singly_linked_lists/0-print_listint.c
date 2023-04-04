#include "lists.h"

/**
 * print_listint - A function that prints all the elements in the list
 * @h: A pointer to listint structure
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (0);


	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}