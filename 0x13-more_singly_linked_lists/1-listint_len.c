
#include "lists.h"
/**
* listint_len - function that returns the number of elements
* in a linked listint_t list.
* @h: linked list
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t nom = 0;
while (h)
{
nom++;
h = h->next;
}
return (nom);
}
