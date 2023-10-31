#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings
* @s1: input
* @s2: input
* Return: NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
char *con;
int a, b;
if (s1 == NULL)
s1 = " ";
if (s2 == NULL)
s2 = " ";
a = b = 0;
while (s1[a] != '\0')
a++;
while (s2[b] != '\0')
b++;
con = malloc(sizeof(char) * (a + b + 1));
if (con == NULL)
return (NULL);
a = b = 0;
while (s1[a] != '\0')
{
con[a] = s1[a];
a++;
}
while (s2[b] != '\0')
{
con[b] = s1[b];
b++;
a++;
}
con[a] = '\0';
return (con);
}
