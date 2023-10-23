#include "main.h"
/**
* _strstr - Entry
* @haystack: input
* @needle: input
* Return: Always 0 (Succes)
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *s = haystack;
char *m = needle;
while (*s == *m && *m != '\0')
{
s++;
m++;
}
if (*m == '\0')
return (haystack);
}
return (0);
}
