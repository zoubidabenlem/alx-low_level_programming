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
	int data;

	if (*head == NULL)
		return (0);

	h = *head;
	data = h->n;
	free(*head);
	*head = h->next;

	return (data);
}
