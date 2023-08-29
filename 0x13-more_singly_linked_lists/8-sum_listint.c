#include "lists.h"

/**
 * sum_listint - calculates the total of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting total
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *tm = head;

	while (tm)
	{
		total += tm->n;
		tm = tm->next;
	}

	return (total);
}

