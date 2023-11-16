#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node_end - function that adds a new node at the end of a list_t list.
* @head: double pointer
* @str: string
* Return: address or NULL if fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *d;
list_t *j = *head;
unsigned int len = 0;
while (str[len])
len++;
d = malloc(sizeof(list_t));
if (!d)
return (NULL);
d->str = strdup(str);
d->len = len;
d->next = NULL;
if (*head == NULL)
{
*head = d;
return (d);
}
while (j->next)
j = j->next;
j->next = d;
return (d);
}
