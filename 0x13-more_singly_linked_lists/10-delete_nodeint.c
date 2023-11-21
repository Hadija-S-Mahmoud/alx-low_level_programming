#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index index of a listint_t list
* @head: pointer
* @index: index
* Return: 1 if successful and -1 if failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *t = *head;
listint_t *c = NULL;
unsigned int h = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(t);
return (1);
}
while (h < index - 1)
{
if (!t || !(t->next))
return (-1);
t = t->next;
h++;
}
c = t->next;
t->next = c->next;
free(c);
return (1);
}
