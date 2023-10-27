#include "main.h"
/**
 * _strlen - function
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int v = 0;
while (*s != '\0')
{
v++;
s++;
}
return (v);
}
