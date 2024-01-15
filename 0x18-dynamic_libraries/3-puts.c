#include "main.h"
/**
 * _puts - function
 * @s: input
 * Return: 0
 */
void _puts(char *s)
{
char *str = s;
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
