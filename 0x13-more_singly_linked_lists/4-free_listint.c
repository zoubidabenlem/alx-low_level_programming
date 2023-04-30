#include "lists.h"
/**
 * free_listint - Frees list
 * @head: head of list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *del = malloc(sizeof(listint_t));

	while ((del  = head) != NULL)
	{
		head = del->next;
		free(del);
	}
}
