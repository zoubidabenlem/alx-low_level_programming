#include "lists.h"
/**
 * print_listint - prints list of numbers
 * @h: head of list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (NULL);

	while (h != NULL)
	{
		printf("%d\n");
		h = h->next;
		i++;
	}
	return (i);
}
