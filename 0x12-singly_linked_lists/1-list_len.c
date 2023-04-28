# include "lists.h"
/**
 * list_len - counts size of list
 * @h: head of list
 *
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t i;
	i = 0;

	while(h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
