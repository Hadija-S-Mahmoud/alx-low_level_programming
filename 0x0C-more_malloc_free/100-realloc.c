#include "main.h"
#include <stdlib.h>
/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size, in bytes, of the allocated space for ptr
* @new_size: new size, in bytes of the new memory block
* Return: ptr if new_size == old_size and NULL if new_size is equal to zero & ptr is not NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *a;
unsigned int i, n = new_size;
char *b = ptr;
if (ptr == NULL)
{
a = malloc(new_size);
return (a);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
a = malloc(new_size);
if (a == NULL)
return (NULL);
if (new_size > old_size)
n = old_size;
for (i = 0; i < n; i++)
a[i] = b[i];
free (ptr);
return (a);
}
