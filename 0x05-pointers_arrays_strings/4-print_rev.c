#include "main.h"
/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: string
* Return: 0
*/
void print_rev(char *s)
{
int e = 0;
int f;
while (*s != '\0')
{
e++;
s++;
}
s--;
for (f = e; f > 0; f--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
