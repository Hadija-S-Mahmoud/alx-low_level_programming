#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list,
* and returns the head node’s data (n)
* @head: pointer
* Return: data in the element that was deleted or 0 if empty
*/
int pop_listint(listint_t **head)
{
listint_t *t;
int nom;
if (!head || !*head)
return (0);
nom = (*head)->n;
t = (*head)->next;
free(*head);
*head = t;
return (nom);
}
