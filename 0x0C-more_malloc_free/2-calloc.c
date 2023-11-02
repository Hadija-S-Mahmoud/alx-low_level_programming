#include "main.h"
#include "stdlib.h"
/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: allocate memory for array
* @size: int
* Return: NULL if nmemb or size is 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int i;
if (nmemb == 0 || size == 0)
return (0);
a = malloc(nmemb * size);
if (a == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
a[i] = 0;
return (a);
}
