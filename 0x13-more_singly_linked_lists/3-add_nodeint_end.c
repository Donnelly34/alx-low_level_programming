#include "lists.h"

/**
 * add_nodeint_end - includes a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the included element
 *
 * Return: pointer to the added node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added;
	listint_t *dog = *head;

	added = malloc(sizeof(listint_t));
	if (!added)
		return (NULL);

	added->n = n;
	added->next = NULL;

	if (*head == NULL)
	{
		*head = added;
		return (added);
	}

	while (dog->next)
		dog = dog->next;

	dog->next = added;

	return (added);
}


