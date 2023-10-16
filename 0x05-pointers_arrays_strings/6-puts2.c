#include "main.h"
/**
* puts2 -  prints every other character of a string
* starting with the first character, followed by a new line
* @str: input
* Return: print
*/
void puts2(char *str)
{
int g = 0;
int h = 0;
char *j = str;
int k;
while (*j != '\0')
{
j++;
g++;
}
h = g - 1;
for (k = 0; k <= h; k++)
{
if (k % 2 == 0)
{
_putchar(str[k]);
}
}
_putchar('\n');
}
