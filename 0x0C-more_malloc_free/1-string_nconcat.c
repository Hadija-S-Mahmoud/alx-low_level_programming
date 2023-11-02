#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - function that concatenates two strings
* @s1: char
* @s2: char
* @n: int
* Return: NULL if function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b, c;
char *h;
if (s1 == NULL)
{
a = 0;
}
else
{
for (a = 0; s1[a]; ++a)
;
}
if (s2 == NULL)
{
b = 0;
}
else
{
for (b = 0; s2[b]; ++b)
;
}
if (b > n)
b = n;
h = malloc(sizeof(char) * (a + b + 1));
if (h == NULL)
return (NULL);
for (c = 0; c < a; c++)
h[c] = s1[c];
for (c = 0; c < b; c++)
h[c + a] = s2[c];
h[a + b] = '\0';
return (h);
}
