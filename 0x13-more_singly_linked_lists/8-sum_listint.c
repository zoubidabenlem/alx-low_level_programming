#include "lists.h"
/**
 * sum_listint - Sums  node of lists
 * @head: headof list
 *
 * Return: sum of nodes of lists
 */

int sum_listint(listint_t *head)
{
	listint_t *pos = head;
	int sum = 0;

	while (pos != NULL)
	{
		sum += pos->n;
		pos = pos->next;
	}
	return (sum);
}
