#include "lists.h"
/**
 * pop_listint - deletes head of list
 * @head: head of list
 *
 * Return: head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *h = malloc(sizeof(listint_t));
	int data = 0;

	if (*head == NULL)
		return (data);

	h = *head;
	data = h->n;
	*head = h->next;
	free(h);
	
	return (data);
}
