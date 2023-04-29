#include "lists.h"
/**
 * free_listint - Frees list
 * @head: head of list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *del = malloc(sizeof(listint_t));

	while (head != NULL)
	{
		del = head;
		free(head);
		head = del->next;
	}
}
