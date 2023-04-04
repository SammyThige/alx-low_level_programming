#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: integer to be added to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	prev_node = get_nodeint_at_index(*head, idx - 1);
	if (prev_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	return (new_node);
}

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list. If the node does not exist,
 * return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
