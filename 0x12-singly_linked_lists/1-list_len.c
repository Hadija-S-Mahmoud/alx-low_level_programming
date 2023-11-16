#include "lists.h"
#include <stdlib.h>
/**
* list_len -  function that returns the number of
* elements in a linked list_t list.
* @h: the pointer
* Return: number of elmnt in h
*/
size_t list_len(const list_t *h)
{
size_t r = 0;
while (h)
{
r++;
h = h->next;
}
return (r);
}
