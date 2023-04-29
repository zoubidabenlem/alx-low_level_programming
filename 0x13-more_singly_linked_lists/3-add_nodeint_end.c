#include "lists.h"
/**
 * add_nodeint_end - Adds node at the end of list
 * @head: head of list
 * @n: int to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pos = malloc(sizeof(listint_t));
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if ((*head) == NULL)
	{
		*head = node;
	}
	else
	{
		pos = *head;
		while (pos->next != NULL)
		{
			pos = pos->next;
		}
		pos->next = node;
	}
	return (node);
}
