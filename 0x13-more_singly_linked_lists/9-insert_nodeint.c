#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at index 
 * @head: head of list
 * @idx: index of the list where the new node should be added
 * @n: number to be added 
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pos = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int count = 0;
	new->n = n;

	while (pos != NULL)
	{
		if (count == idx)
		{
			pos->next = new;
			new->next = pos->next->next;
			return (new);
		}
		count++;
		pos = pos->next;
	}
	return (NULL);
}
