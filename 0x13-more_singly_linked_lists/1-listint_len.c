#include "lists.h"

/**
 * listint_len - A function that prints all the elements in the list
 * @h: A pointer to listint structure
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (0);


	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
