#include "main.h"
/**
* _memcpy - copies memory area
* @dest: memory where is copied
* @src: memory
* @n: number of bytes
* Return: copied memory with n bytes changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = n;
int h = 0;
for (; h < i; h++)
{
dest[h] = src[h];
n--;
}
return (dest);
}
