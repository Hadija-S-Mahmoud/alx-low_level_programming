#include "function_pointers.h"
/**
* int_index - function that searches for an integer.
* @array: array
* @size: size of elements in array
* @cmp: pointer
* Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int h;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (h = 0; h < size; h++)
{
if (cmp(array[h]))
return (h);
}
return (-1);
}
