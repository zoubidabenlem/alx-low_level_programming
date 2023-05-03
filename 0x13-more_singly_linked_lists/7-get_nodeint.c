#include "lists.h"
/**
 * get_nodeint_at_index - gets node from an index
 * @head: head of list
 * @index: index of node
 *
 * Return: nth node of a list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pos = head;
	unsigned int count = 0;

	while (pos != NULL)
	{
		if (count == index)
		{
			return (pos);
		}
		count++;
		pos = pos->next;
	}
	return (NULL);
}
