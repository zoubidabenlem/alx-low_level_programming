#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *del = head;
	list_t *new;

	while (del != NULL)
	{
		new = del->next;
		free(del->str);
		free(del);
		del = new;
	}
}
