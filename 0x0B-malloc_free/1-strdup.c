#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: char
* Return: Null if str = Null
*/
char *_strdup(char *str)
{
char *h;
int  a, b = 0;
if (str == NULL)
return (NULL);
a = 0;
while (str[a] != '\0')
a++;
h = malloc(sizeof(char) * (a + 1));
if (h == NULL)
return (NULL);
for (b = 0; str[b]; b++)
h[b] = str[b];
return (h);
}
