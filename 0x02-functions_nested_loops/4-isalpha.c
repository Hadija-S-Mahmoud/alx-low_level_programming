#include "main.h"
/**
 * _isalpha - Checks character
 * @c: The character to check
 * Return: 1 for all
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
