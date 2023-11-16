#include "lists.h"
#include <stdlib.h>
/**
* free_list - frees a linked list
* @head: list to be freed
*/
void free_list(list_t *head)
{
list_t *h;
while (head)
{
h = head->next;
free(head->str);
free(head);
head = h;
}
}
