#include "lists.h"
/**
 * free_listint - Frees list
 * @head: head of list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *del = head;
	listint_t *node = malloc(sizeof(listint_t));

	while (del != NULL)
	{
		node = del->next;
		free(del);
		del = node;
	}
}
