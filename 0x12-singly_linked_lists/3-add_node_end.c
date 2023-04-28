#include "lists.h"
/**
 * add_node - adds node at the end of list
 * @head: head of list
 * @str: string to b added
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp = malloc(sizeof(list_t));
	temp = *head;

	if ((*head) == NULL)
		return (NULL);

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new->str = strdup(str);
	new->len = strlen(str);
	temp->next = new;
	new->next = NULL;
	return (new);
}
