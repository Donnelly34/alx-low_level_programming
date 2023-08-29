#include "lists.h"

/**
 * add_nodeint - includes an added node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that added node
 *
 * Return: pointer to the added node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added;

	added = malloc(sizeof(listint_t));
	if (!added)
		return (NULL);

	added->n = n;
	added->next = *head;
	*head = added;

	return (added);
}

