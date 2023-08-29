#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int brand;
	listint_t *dog;
	listint_t *tm = *head;

	dog = malloc(sizeof(listint_t));
	if (!dog || !head)
		return (NULL);

	dog->n = n;
	dog->next = NULL;

	if (idx == 0)
	{
		dog->next = *head;
		*head = dog;
		return (dog);
	}

	for (brand = 0; tm && brand < idx; brand++)
	{
		if (brand == idx - 1)
		{
			dog->next = tm->next;
			tm->next = dog;
			return (dog);
		}
		else
			tm = tm->next;
	}

	return (NULL);
}

