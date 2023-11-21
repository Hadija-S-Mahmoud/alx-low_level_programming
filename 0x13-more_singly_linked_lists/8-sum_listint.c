#include "lists.h"
/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list.
* @head: pointer
* Return: 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
int s = 0;
listint_t *t = head;
while (t)
{
s += t->n;
t = t->next;
}
return (s);
}
