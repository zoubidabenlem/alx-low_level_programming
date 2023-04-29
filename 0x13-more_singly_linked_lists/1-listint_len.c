#include "lists.h"
/**
 * listint_len - length of lists
 * @h: head of list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
