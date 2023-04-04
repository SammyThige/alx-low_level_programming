#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node's data (n).
 * @head: double pointer to the head of the list
 *
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);

	new_node = *head;
	n = new_node->n;
	*head = (*head)->next;
	free(new_node);

	return (n);

}
