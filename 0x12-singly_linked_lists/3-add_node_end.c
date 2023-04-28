#include "lists.h"
/**
 * add_node_end - adds node at the end of list
 * @head: head of list
 * @str: string to b added
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp;	

	new->str = strdup(str);
	new->len = strlen(str);

	if (new == NULL)
		return (NULL);
	if ((*head) == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	temp->next = new;
	new->next = NULL;
	}
	return (new);
}
