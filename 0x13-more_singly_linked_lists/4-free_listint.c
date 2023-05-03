#include "lists.h"
/**
 * free_listint - Frees list
 * @head: head of list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *del = head;
	listint_t *tmp;

	while (del != NULL)
	{
		tmp = del->next;
		free(del);
		current = del;
	}
}
